#include "Energia.h"

void setup();
void loop();

#line 1 "cpv.ino"
#include <msp430g2955.h>
#define a BIT4; 
#define b BIT0; 
#define c BIT2; 
#define d BIT4; 
#define e BIT1; 
#define f BIT3; 
#define g BIT5; 

void setup() {
	WDTCTL =   WDTPW   +   WDTHOLD;    

	P1DIR  |= BIT7 + BIT0 + BIT2 + BIT4 + BIT1 + BIT3 + BIT5 + BIT6;
	P2DIR  |=  BIT4 + BIT2 + BIT1 + BIT0 + BIT6 + BIT7;   
	P3DIR  |=  BIT0;


	P2OUT  |= BIT4;  
    P1OUT  |= BIT0;  
    P1OUT  |= BIT2;  
    P1OUT  |= BIT4;  
    P1OUT  |= BIT1;  
    P1OUT  |= BIT3;  
    P1OUT  |= BIT5;  
	P1OUT  &= ~BIT7; 
	P1OUT  &= ~BIT6; 
	P3OUT  &= ~BIT0; 
	P2OUT  &= ~BIT2; 
	P2OUT  &= ~BIT1; 
	P2OUT  &= ~BIT0; 
	P2OUT  &= ~BIT6; 
	P2OUT  &= ~BIT7; 
loop();

}

void loop() {
  
	  delay(100);

	  P1OUT ^= P1OUT;
	
}

static const byte numberTable[] = 
{
 a+b+c+d+e+f, 
 0x06, 
 0x5B, 
 0x4F, 
 0x66, 
 0x6D, 
 0x7D, 
 0x07, 
 0x7F, 
 0x6F, 
 0x77, 
 0x7C, 
 0x39, 
 0x5E, 
 0x79, 
 0x71, 
 0x00, 
};


