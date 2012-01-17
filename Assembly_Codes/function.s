org 0xf800
start:
; stop the watchdog
    mov.w #0x5a80, &0x0120
    mov #0x280, R1
    mov #0xabcd, R15
call #fun
L1:
jmp L1
fun:
    mov #0x1234, R15
    ret
org 0xfffe
dw start

