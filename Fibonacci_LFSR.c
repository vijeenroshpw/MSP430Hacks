#include<msp430.h>
int main() 
{
	TACTL=0x0220;	
	P1DIR = 0x01;
	int i;	
	unsigned lfsr = 0xef1f,bit =0;
	while(1) {
		i=0;		
		bit  = ((lfsr >> 0) ^ (lfsr >> 2) ^ (lfsr >> 3) ^ (lfsr >> 5) ) & 1;
  		lfsr =  (lfsr >> 1) | (bit << 15);
		while(i++ <= 30000);
		P1OUT = lfsr;
	}
}

