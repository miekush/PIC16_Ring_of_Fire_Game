//Ring of Fire LED Game
//Device: PIC16F15223
//File: main.c
//Author: Mike Kushnerik
//Date: 5/19/21

#include "mcc_generated_files/mcc.h"

//global variables
int ledReg = 0b0000000001, 
    speedReg = 0b0000000000;
int gameState = 0,
    ledPeriod = 50, //initially at 50% speed
    ledCount = 0, 
    blinkCount = 0, 
    buttonCount = 0, 
    buttonDuration;
//flag for button press
bool buttonFlag = false;

//function prototypes
void timerISR(void);
void buttonISR(void);
void processButton(void);

//main function
void main(void)
{
    //initialize the device
    SYSTEM_Initialize();
    
    //register interrupt handlers
    TMR0_SetInterruptHandler(timerISR);
    TMR2_SetInterruptHandler(buttonISR);

    //enable interrupts
    INTERRUPT_GlobalInterruptEnable();
    INTERRUPT_PeripheralInterruptEnable();
    
    //enter sleep mode
    SLEEP();

    //main loop
    while (1)
    {
        if(buttonFlag)
        {
            processButton();
        }
        //determine current game state
        switch(gameState)
        {
            case 0: //game inactive
                if(blinkCount > 250) //250 ms
                {
                    //toggle active led
                    PORTA ^= (ledReg & 0b000111)|((ledReg >> 4) & 0b110000);
                    PORTC ^= ((ledReg >> 3) & 0b000011)|((ledReg >> 2) & 0b111000);
                    //reset counter
                    blinkCount = 0;
                }
                break;
            case 1: //game active
                if(ledCount > ledPeriod)
                {
                    //shift leds
                    ledReg = ledReg << 1;
                    //reset register
                    if(ledReg > 0b1000000000) ledReg = 0b0000000001;
                    /*
                    //write led pins
                    PORTA = (ledReg & 0b000111)|((ledReg >> 5) & 0b010000);
                    PORTC = ((ledReg >> 3) & 0b111111);
                    */
                    //write led pins
                    PORTA = (ledReg & 0b000111)|((ledReg >> 4) & 0b110000);
                    PORTC = ((ledReg >> 3) & 0b000011)|((ledReg >> 2) & 0b111000);
                     
                    //reset counter
                    ledCount = 0;
                }
                break;
            case 2: //game settings
                //write led speed to register for bargraph
                speedReg = 0;
                for(int i = 0; i < 11 - (ledPeriod / 10); i++)
                {
                  speedReg |= 1 << i;
                }
                //write led pins
                PORTA = (speedReg & 0b000111)|((speedReg >> 4) & 0b110000);
                PORTC = ((speedReg >> 3) & 0b000011)|((speedReg >> 2) & 0b111000);
                break;
            default:
                break;
        }
    }
}

//timer isr to increment counters every 1 ms
void timerISR (void)
{
    ledCount++;
    blinkCount++;
    buttonCount++;
}

//isr to capture button press
void buttonISR (void)
{
    //clear watchdog timer
    CLRWDT();
    //determine press duration
    if(!RC2) //button pressed
    {
        buttonCount = 0;
    }
    else //button released
    {
        buttonDuration = buttonCount;
        buttonFlag = true;
    }
}

//function to process button press
void processButton(void)
{
    //reset flag
    buttonFlag = false;
    //process button
    if(buttonDuration < 3000) //short press
    {
        //determine task
        switch(gameState)
        {
            case 0:
                ledCount = 0;
                gameState = 1;
                break;
            case 1:
                blinkCount = 0;
                gameState = 0;
                break;
            case 2:
                //decrement led period by 10 ms
                ledPeriod -= 10;
                //reset to lowest value
                if(ledPeriod < 10) ledPeriod = 100;
                break;
            default:
                break;
        }
    }
    else //long press
    {
        //determine task
        switch(gameState)
        {
            case 0:
                gameState = 2;
                break;
            case 1:
                gameState = 2;
                break;
            case 2:
                ledCount = 0;
                gameState = 1;
                break;
            default:
                break;
        }
    }
    //reset press duration
    buttonDuration = 0;
}
