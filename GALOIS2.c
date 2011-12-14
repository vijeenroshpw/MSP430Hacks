#include<msp430.h>
int main()
{
	
	int i=0;	
	unsigned lfsr = 0x2222;
	P1DIR=0x41;	
	while(1) {
		i=0;		
		lfsr = (lfsr >> 1) ^ (-(lfsr & 1u) & 0xB400u);
		while(i++ <= 30000);
		P1OUT=lfsr;
	}
}

