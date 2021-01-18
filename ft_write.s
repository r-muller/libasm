; 1st arg           Stack           EBX               RDI            RDI
; 2nd arg           Stack           ECX               RSI            RSI
; 3rd arg           Stack           EDX               RDX            RDX
; 4th arg           Stack           ESI               RCX            R10
; 5th arg           Stack           EDI               R8             R8
; 6th arg           Stack           EBP               R9  


; Les six premiers parametres entiers sont passes dans rdi , rsi , rdx, rcx, r8 et r9 dans cet ordre. Les autres sont passes par la pile.
;  Ces registres, ainsi que rax, r10 et r11 sont d ́etruits par les appels de fonctions.
;  Les registres callee-save sont rbx, r12, ... , r15.
;  Les parametres flottants sont passes dans xmm0, xmm1,..., xmm7
; recuperer les parametres passer par un programme C [rbp+16], [rbp+24], ..... 

; rax Valeur de retour des fonctions 

;		RAX 		RDI					RSI					RDX
;write	0x01		unsigned int fd		const char *buf		size_t count
; mov rax, 0x02000004 	MAC
;  ___error 		MAC

;erro:
;	push rax
;	call __errno_location
;	pop qword [rax]
;	mov rax, -1
;	ret

;================ MAIN ====================
section .text
    global ft_write
	extern __errno_location

ft_write:
	mov rax, 0x01
	syscall
	cmp rax, -1
	jle erro
	ret

erro:
	neg rax
    push rax
	call __errno_location
	pop rbx
	mov [rax], rbx
	mov rax, -1
    ret