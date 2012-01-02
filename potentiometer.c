#include<msp430.h>
     
   
    void init_adc() {
            ADC10CTL0=ADC10ON | SREF_0 | ADC10SHT_2;
            ADC10CTL1=INCH_4 | SHS_0 | ADC10DIV_0 | ADC10SSEL_0 | CONSEQ_0 ;    
                                                                                       
                                                                           
            ADC10AE0=BIT4;      
           
            ADC10CTL0|=ENC;      
    }
     
   
    void start_conversion() {
            ADC10CTL0|=ADC10SC;
    }
    int is_converting() {
                    return ADC10CTL1 & ADC10BUSY;
    }
     
     
    void main() {
            int i=0;
            init_adc();
     
            P1DIR=0x41;
            P1OUT=0x00;    
            while(1) {
                    start_conversion();              
                    while( is_converting() );
                   
                    if(ADC10MEM >=0 && ADC10MEM <= 255)
                            P1OUT=0x00;
                    else if (ADC10MEM>=256 && ADC10MEM <=511)
                            P1OUT=0x01;
                    else if(ADC10MEM >=512 && ADC10MEM <=767)
                            P1OUT=0x40;
                    else
                            P1OUT=0x41;
                                     
                    for(i=0;i<32000;i++);  
            }
    }
