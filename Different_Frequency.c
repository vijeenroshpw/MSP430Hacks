#include<msp430.h>
/* Theorey :
	let H be frequency in Hz , T be Time in seconds 
	let C be the number of cycles executed;
        since the counter is 16 bit register it resets when it reaches 65536;
	and sets TAIGF . We are relying on this to light LED.
	so the time that is required by counter to reach 65536 ie to cover 65536 cycles 
	so we have  H * T = C
	is T1 = C1 / H1 = 65536 / H1;
	ie, our lED blinks at each T intervals of time ie, at frequency of 1/T1;
	let this be F1 (= 1/T1) , 
	now in the loop be low Green LED blinks, only when n==0, that happens only after each 20 switches of RED LED ,
	so ie, the frequency of GREEN is F1/20  = F2

	Frequency of RED = F1;
	of GREEN = F2 = F1/20;
*/  
int main()
{
	int n=0;
	P1DIR=0x41;
	P1OUT=0x41;
	TACTL=0x0220;
	while(1) {
		while(!(TACTL & 1));
		TACTL^=1;
		P1OUT^=BIT0;	
		if(n==0) {
			P1OUT^=BIT6;
		}
		n = (n + 1)%20;
	}
}

