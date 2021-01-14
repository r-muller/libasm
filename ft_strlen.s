; 1st arg           Stack           EBX               RDI            RDI
; 2nd arg           Stack           ECX               RSI            RSI
; 3rd arg           Stack           EDX               RDX            RDX
; 4th arg           Stack           ESI               RCX            R10
; 5th arg           Stack           EDI               R8             R8
; 6th arg           Stack           EBP               R9  


;================ MAIN ====================
section .text
    global _ft_strlen

_ft_strlen:
    mov rax, -1

loop:
    inc rax
    mov cl, byte[rdi+rax]
    cmp cl, 0
    jne loop
    ret                         ; return (rax)