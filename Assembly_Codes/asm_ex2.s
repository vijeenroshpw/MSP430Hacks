org 0xf800

start:mov.w #0x5a80, &0x0120
      mov.w #9, R5
      mov.w #1, R6
      and.w R6, R5



loop:jmp loop

org 0xfffe
dw start 

