/* Alternatively Blinks Red and Green */
#include<msp430.h>
void delay(void); /* includes an loop delay */

main()
{
  P1DIR=0x41;
  P1OUT=0x40;
  while(1)
  {
    P1OUT^=0x41;
    delay();
    P1OUT^=0x41;
    delay();
  }

}
void delay(void)
{
  unsigned i;
  for(i=0;i<32000;i++);

}

