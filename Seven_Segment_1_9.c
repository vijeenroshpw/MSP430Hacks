#include<msp430.h>
void main() {
	int arr[11] = {0,6,109,121,51,91,95,112,255,123};
	int i=0,j=0;
	P1DIR = 255;
	P1OUT=0;
	while(1) {
		P1OUT=arr[i];
		for(j=0;j<32000;j++);
		i=(i+1)%10;
	}
}

