#include<msp430.h>
void main() {
	int var = 15,change=8,i;
	P1DIR=15;
	P1OUT=0;
	while(1) {
		P1OUT=var&change;
		for(i=0;i<32000;i++);
		change>>=1;
		if(change==0)
			change=8;
	}
}

