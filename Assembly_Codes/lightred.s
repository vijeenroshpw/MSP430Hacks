org 0xf800

start: mov.b #1 , &0x21 ;   P1DIR = 1  
       mov.b #1 , &0x22 ;   P1OUT = 1

loop: jmp loop         ;   while(1) indicates the programme termination

org 0xfffe              ; reset vector set
dw start                ; to first instructions location


