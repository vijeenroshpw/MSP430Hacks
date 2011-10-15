/* Blinks the Red Led */

#include<msp430.h>

void delay(void); /* includes an loop delay */

main()
{
  P1DIR=1;
  P1OUT=1; 
 while(1)
  {
    delay();
    P1OUT^=1;
    delay();
    P1OUT^=1;
  }
}

void delay(void)
{
  unsigned i;
  for(i=0;i<32000;i++);
}

    
 
