/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F15223
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set LED_1 aliases
#define LED_1_TRIS                 TRISAbits.TRISA0
#define LED_1_LAT                  LATAbits.LATA0
#define LED_1_PORT                 PORTAbits.RA0
#define LED_1_WPU                  WPUAbits.WPUA0
#define LED_1_OD                   ODCONAbits.ODCA0
#define LED_1_ANS                  ANSELAbits.ANSA0
#define LED_1_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define LED_1_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define LED_1_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define LED_1_GetValue()           PORTAbits.RA0
#define LED_1_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define LED_1_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define LED_1_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define LED_1_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define LED_1_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define LED_1_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define LED_1_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define LED_1_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set LED_2 aliases
#define LED_2_TRIS                 TRISAbits.TRISA1
#define LED_2_LAT                  LATAbits.LATA1
#define LED_2_PORT                 PORTAbits.RA1
#define LED_2_WPU                  WPUAbits.WPUA1
#define LED_2_OD                   ODCONAbits.ODCA1
#define LED_2_ANS                  ANSELAbits.ANSA1
#define LED_2_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define LED_2_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define LED_2_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define LED_2_GetValue()           PORTAbits.RA1
#define LED_2_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define LED_2_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define LED_2_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define LED_2_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define LED_2_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define LED_2_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define LED_2_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define LED_2_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set LED_3 aliases
#define LED_3_TRIS                 TRISAbits.TRISA2
#define LED_3_LAT                  LATAbits.LATA2
#define LED_3_PORT                 PORTAbits.RA2
#define LED_3_WPU                  WPUAbits.WPUA2
#define LED_3_OD                   ODCONAbits.ODCA2
#define LED_3_ANS                  ANSELAbits.ANSA2
#define LED_3_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define LED_3_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define LED_3_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define LED_3_GetValue()           PORTAbits.RA2
#define LED_3_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define LED_3_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define LED_3_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define LED_3_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define LED_3_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define LED_3_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define LED_3_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define LED_3_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set LED_10 aliases
#define LED_10_TRIS                 TRISAbits.TRISA4
#define LED_10_LAT                  LATAbits.LATA4
#define LED_10_PORT                 PORTAbits.RA4
#define LED_10_WPU                  WPUAbits.WPUA4
#define LED_10_OD                   ODCONAbits.ODCA4
#define LED_10_ANS                  ANSELAbits.ANSA4
#define LED_10_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define LED_10_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define LED_10_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define LED_10_GetValue()           PORTAbits.RA4
#define LED_10_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define LED_10_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define LED_10_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define LED_10_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define LED_10_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define LED_10_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define LED_10_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define LED_10_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set RA5 procedures
#define RA5_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define RA5_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define RA5_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define RA5_GetValue()              PORTAbits.RA5
#define RA5_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define RA5_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define RA5_SetPullup()             do { WPUAbits.WPUA5 = 1; } while(0)
#define RA5_ResetPullup()           do { WPUAbits.WPUA5 = 0; } while(0)
#define RA5_SetAnalogMode()         do { ANSELAbits.ANSA5 = 1; } while(0)
#define RA5_SetDigitalMode()        do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set LED_4 aliases
#define LED_4_TRIS                 TRISCbits.TRISC0
#define LED_4_LAT                  LATCbits.LATC0
#define LED_4_PORT                 PORTCbits.RC0
#define LED_4_WPU                  WPUCbits.WPUC0
#define LED_4_OD                   ODCONCbits.ODCC0
#define LED_4_ANS                  ANSELCbits.ANSC0
#define LED_4_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define LED_4_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define LED_4_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define LED_4_GetValue()           PORTCbits.RC0
#define LED_4_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define LED_4_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define LED_4_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define LED_4_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define LED_4_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define LED_4_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define LED_4_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define LED_4_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set LED_5 aliases
#define LED_5_TRIS                 TRISCbits.TRISC1
#define LED_5_LAT                  LATCbits.LATC1
#define LED_5_PORT                 PORTCbits.RC1
#define LED_5_WPU                  WPUCbits.WPUC1
#define LED_5_OD                   ODCONCbits.ODCC1
#define LED_5_ANS                  ANSELCbits.ANSC1
#define LED_5_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define LED_5_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define LED_5_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define LED_5_GetValue()           PORTCbits.RC1
#define LED_5_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define LED_5_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define LED_5_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define LED_5_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define LED_5_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define LED_5_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define LED_5_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define LED_5_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set LED_6 aliases
#define LED_6_TRIS                 TRISCbits.TRISC2
#define LED_6_LAT                  LATCbits.LATC2
#define LED_6_PORT                 PORTCbits.RC2
#define LED_6_WPU                  WPUCbits.WPUC2
#define LED_6_OD                   ODCONCbits.ODCC2
#define LED_6_ANS                  ANSELCbits.ANSC2
#define LED_6_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define LED_6_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define LED_6_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define LED_6_GetValue()           PORTCbits.RC2
#define LED_6_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define LED_6_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define LED_6_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define LED_6_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define LED_6_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define LED_6_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define LED_6_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define LED_6_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set LED_7 aliases
#define LED_7_TRIS                 TRISCbits.TRISC3
#define LED_7_LAT                  LATCbits.LATC3
#define LED_7_PORT                 PORTCbits.RC3
#define LED_7_WPU                  WPUCbits.WPUC3
#define LED_7_OD                   ODCONCbits.ODCC3
#define LED_7_ANS                  ANSELCbits.ANSC3
#define LED_7_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define LED_7_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define LED_7_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define LED_7_GetValue()           PORTCbits.RC3
#define LED_7_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define LED_7_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define LED_7_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define LED_7_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define LED_7_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define LED_7_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define LED_7_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define LED_7_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set LED_8 aliases
#define LED_8_TRIS                 TRISCbits.TRISC4
#define LED_8_LAT                  LATCbits.LATC4
#define LED_8_PORT                 PORTCbits.RC4
#define LED_8_WPU                  WPUCbits.WPUC4
#define LED_8_OD                   ODCONCbits.ODCC4
#define LED_8_ANS                  ANSELCbits.ANSC4
#define LED_8_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define LED_8_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define LED_8_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define LED_8_GetValue()           PORTCbits.RC4
#define LED_8_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define LED_8_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define LED_8_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define LED_8_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define LED_8_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define LED_8_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define LED_8_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define LED_8_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set LED_9 aliases
#define LED_9_TRIS                 TRISCbits.TRISC5
#define LED_9_LAT                  LATCbits.LATC5
#define LED_9_PORT                 PORTCbits.RC5
#define LED_9_WPU                  WPUCbits.WPUC5
#define LED_9_OD                   ODCONCbits.ODCC5
#define LED_9_ANS                  ANSELCbits.ANSC5
#define LED_9_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define LED_9_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define LED_9_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define LED_9_GetValue()           PORTCbits.RC5
#define LED_9_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define LED_9_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define LED_9_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define LED_9_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define LED_9_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define LED_9_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define LED_9_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define LED_9_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/