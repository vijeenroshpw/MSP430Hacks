org 0xf800

start:mov.w #0x5a80 , 0x0120
      mov.b #0x01 , &0x22
      mov.b #0x01 , &0x21
L1:xor.b #0x01 ,&0x21

    mov.w #0xffff , R7  ;initialize the counter  
L2: sub.w #1 , R7    ; decrement the counter by one 
    jnz L2              ; jump to L2 if counter falls to zero
    jmp L1              ; else unconditionaly jump to L1
loop:jmp loop           ; indicates programme termination 

org 0xfffe
dw start

