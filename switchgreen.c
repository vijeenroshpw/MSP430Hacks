#include<msp430.h>
main()
{
  P1DIR=0x40;
  while(1)
  {
     P1OUT=0;
     while(P1IN & 0x08);
     P1OUT=0x40;
  }
}

