#include <msp430g2955.h>
#define a BIT4; //x10
#define b BIT0; //x01
#define c BIT2; //x04
#define d BIT4; //x10
#define e BIT1; //x02
#define f BIT3; //x08
#define g BIT5; //x20

void setup() {
	WDTCTL =   WDTPW   +   WDTHOLD;    //  Stop    watchdog    timer

	P1DIR  |= BIT7 + BIT0 + BIT2 + BIT4 + BIT1 + BIT3 + BIT5 + BIT6;
	P2DIR  |=  BIT4 + BIT2 + BIT1 + BIT0 + BIT6 + BIT7;   //  Set P1.0    as  Output
	P3DIR  |=  BIT0;


	P2OUT  |= BIT4;  //  anode_a (provides power to anode)
    P1OUT  |= BIT0;  // anode_b
    P1OUT  |= BIT2;  // anode_c
    P1OUT  |= BIT4;  // anode_d
    P1OUT  |= BIT1;  // anode_e
    P1OUT  |= BIT3;  // anode_f
    P1OUT  |= BIT5;  // anode_g
	P1OUT  &= ~BIT7; //cathode_1 (provides ground path for cathode)
	P1OUT  &= ~BIT6; //cathode_2
	P3OUT  &= ~BIT0; //cathode_3
	P2OUT  &= ~BIT2; //cathode_4
	P2OUT  &= ~BIT1; //cathode_5
	P2OUT  &= ~BIT0; //cathode_6
	P2OUT  &= ~BIT6; //cathode_6
	P2OUT  &= ~BIT7; //cathode_7
loop();

}

void loop() {
  // put your main code here, to run repeatedly: 
	  delay(100);

	  P1OUT ^= P1OUT;
	//  P4OUT = ~P4OUT;
}

static const byte numberTable[] = // convert number to lit-segments
{
 a+b+c+d+e+f, // 0
 0x06, // 1
 0x5B, // 2
 0x4F, // 3
 0x66, // 4
 0x6D, // 5
 0x7D, // 6
 0x07, // 7
 0x7F, // 8
 0x6F, // 9
 0x77, // A
 0x7C, // b
 0x39, // C
 0x5E, // d
 0x79, // E
 0x71, // F
 0x00, //<blank>
};
