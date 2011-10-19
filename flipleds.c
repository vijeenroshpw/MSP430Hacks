#include<msp430.h>
main()
{
  P1DIR=0x41;
  P1OUT=0x01;
  while(1)
  {
    if(P1IN & 0x08);
    else P1OUT^=P1DIR;
  }
}

