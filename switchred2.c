#include<msp430.h>
main()
{
  P1DIR=1;
  while(1)
  {
    
    if(P1IN & 0x08) P1OUT=1;
    else P1OUT=0;
  }
}

