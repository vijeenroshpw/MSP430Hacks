#include<msp430.h>
int main()
{
	P1DIR = 0x41;
	TACTL = 0x02E0; //SMCLK : Div By 8 : Continues
	TBCTL = 0x0220; //SMCLK :Div by 1 :  Continues
	P1OUT = 0x41;
	while(1) {
		while( !(TACTL & 1 ) && !(TBCTL & 1) );
		if(TACTL && 1) {
			TACTL^=1;
			P1OUT ^= BIT0;
		} else {
			TBCTL^=1;
			P1OUT^=BIT6;
		}
	}
}
 
