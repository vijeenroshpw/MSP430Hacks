#include<msp430.h>
int main() 
{
	TACTL =  0x0220; // SMCLK : div by 8 : continues ;
	P1DIR=0x01;
	P1OUT=0x00;
	while(1) {
		while(!(TACTL & 1));
		P1OUT^=1;
		TACTL^=1; 
	}
}
     
