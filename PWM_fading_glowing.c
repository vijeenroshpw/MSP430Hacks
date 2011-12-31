#include<msp430.h>
#define MAX 1000
int on_time=0;   //the time for which LED is on is controlled by this 
void delay(int time){   //inserts an delay 
	while(time--);
}

void cycle() {
	P1OUT=1;
	delay(on_time);
	P1OUT=0;
	delay(MAX-on_time);
}

void main() {
	int step=20,dir=1;
	P1DIR=1;
	while(1) {
		cycle();
		if(dir ==  1)
			on_time += 20;
		else
			on_time -=20;
		
		if(on_time==0) 
			dir=1;
		if(on_time==MAX)
			dir=-1;
	}
}

