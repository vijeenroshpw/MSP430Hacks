org 0xf800

start: mov.w #0x5a80 , &0x0120   ; disables watchdog
       mov.w #1 , R5             ; copies immediate value 1 to register R5 
       mov.w #2 , R4             ; copies immediate value 1 to register R4
       
       add R4 , R5               ; find sum of 16 bit values and stores in R5
       add R4 , R5               ; find the sum of 16 bit value and stores again in R5

loop:  jmp loop;                 ; indicate end of the programme 

org 0xfffe

dw start                         ; reset vector , 0xfffe and 0xffff are filled with starting address


