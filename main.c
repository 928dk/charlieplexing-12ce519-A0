/* 
 * File:   main.c
 * Author: bg25382
 *
 * Created on September 18, 2012, 9:09 PM

 *     TMR0bits.TMR0 = 0;

OSCCALbits.CAL = 0;
OSCCALbits.CAL0 = 0;
OSCCALbits.CAL1 = 0;
OSCCALbits.CAL2 = 0;
OSCCALbits.CAL3 = 0;
OSCCALbits.CAL4 = 0;
OSCCALbits.CAL5 = 0;
OSCCALbits.OSCFST = 0;
OSCCALbits.OSCSLW = 0;
 
FSRbits.FSR = 0;
INDFbits.INDF = 0;

STATUSbits.C
STATUSbits.CARRY
STATUSbits.DC
STATUSbits.GPWUF
STATUSbits.PA0
STATUSbits.Z
STATUSbits.ZERO
STATUSbits.nPD
STATUSbits.nTO

GPIObits.GP0
GPIObits.GP1
GPIObits.GP2
GPIObits.GP3
GPIObits.GP4
GPIObits.GP5
GPIObits.SCL
GPIObits.SDA
*/

#include <pic12ce519.h>
#include <pic.h>
#include <delays.h>
#include <stdio.h> // for uart etc
#include <stdlib.h> //for strings etc
#include <htc.h>


//#pragma config 
__CONFIG(MCLRE_ON & CP_OFF & WDT_OFF );


//#include <GenericTypeDefs.h>
//#include <math.h>
//#include <signal.h>
//#include <stdarg.h>
//#include <string.h>
//#include <time.h>


//Leds
#define	TRIS_RED	TRISAbits.TRISA3
#define	TRIS_GREEN	TRISAbits.TRISA1
#define	TRIS_BLUE	TRISAbits.TRISA2

#define	PORT_RED	PORTAbits.RA3
#define	PORT_GREEN	PORTAbits.RA1
#define	PORT_BLUE	PORTAbits.RA2

//#####################################
typedef unsigned		u1;
typedef unsigned char		u8;
typedef unsigned short		u16;
typedef unsigned short long	u24;
typedef unsigned long		u32;
/*

char                8-bit  (signed by default)
signed char         8-bit (signed)
unsigned char       8-bit (unsigned)
int                 16 bit (signed)
unsigned int        16-bit (unsigned)
short               Same as int
unsigned short      Same as unsigned int
short long          24-bit (signed)
unsigned short long 24-bit (unsigned)
long                32-bit (signed)
unsigned long       32-bit (unsigned)
*/

/*
volatile char uart_buf_char = 0;
char uart_buf[128];
*/


void Init12ce519(void);
void PwrOnTest(u8 on,u8 off);
void AllLedsOn(void);
void AllLedsOff(void);
void InitTimer0(void);
void InitTimer1(void);
void Init_IO(void);

void Init12ce519(void)
{

}

void PwrOnTest(u8 on,u8 off)
{

}

void AllLedsOn(void)
{


}

void AllLedsOff(void)
{


}

void InitTimer0(void)
{


}



void Init_IO(void)
{


}


/*
 * 
 */
void main(void)
{
    TRIS = 0b011111; //gp 5 as out

    GPIO = 0b111111; //set alle high (off)
    do
    {
    TRIS = 0b011111; //gp 5 as output
    GPIO = 0b100000; //set alle undtage 5 low (on) (5 off)
    asm("nop ");
    asm("nop ");
    asm("nop ");
    asm("nop ");
    asm("nop ");
    GPIO = 0b000000;//set alle low
    asm("nop ");
    asm("nop ");
    asm("nop ");
    asm("nop ");
    asm("nop ");
    TRIS = 0b111111; //all as input
    asm("nop ");
    asm("nop ");
    asm("nop ");
    asm("nop ");
    asm("nop ");
    }while (1);

   
}

