org 0xf800
start:
; stop the watchdog
    mov.w #0x5a80, &0x0120
    mov #0x280, R1
    push #0xabcd
    push #0x1234
    pop R7
    pop R8
L1:
    jmp L1

org 0xfffe
dw start

