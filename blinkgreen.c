/* Blinks the Red Led */

#include<msp430.h>

void delay(void); /* includes an loop delay */

main()
{
  P1DIR=0x40;
  P1OUT=0x40; 
 while(1)
  {
    delay();
    P1OUT^=0x40;
    delay();
    P1OUT^=0x40;
  }
}

void delay(void)
{
  unsigned i;
  for(i=0;i<32000;i++);
}

    
 
