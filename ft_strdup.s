; 1st arg           Stack           EBX               RDI            RDI
; 2nd arg           Stack           ECX               RSI            RSI
; 3rd arg           Stack           EDX               RDX            RDX
; 4th arg           Stack           ESI               RCX            R10
; 5th arg           Stack           EDI               R8             R8
; 6th arg           Stack           EBP               R9  

;	rax, rbx, rcx, rdx, rdi , rsi , rbp, rsp, r8, r9, ..., r15 		64 bits
;	eax, ebx, ecx, edx, edi, esi , ebp, esp, r8d, r9d, ..., r15d 	32 bits
;	ax, bx, cx, dx, di , si , bp, sp, r8w, r9w, ..., 15w 			16 bits (15:0)
;	ah, bh, ch, dh 													8 bits high (15:8)
;	al, bl, cl, dl, dil , sil , bpl, spl,r8b, r9b, ..., r15b 		8 bits low (7:0)

; Les six premiers parametres entiers sont passes dans rdi , rsi , rdx, rcx, r8 et r9 dans cet ordre. Les autres sont passes par la pile.
;  Ces registres, ainsi que rax, r10 et r11 sont d ́etruits par les appels de fonctions.
;  Les registres callee-save sont rbx, r12, ... , r15.
;  Les parametres flottants sont passes dans xmm0, xmm1,..., xmm7
; recuperer les parametres passer par un programme C [rbp+16], [rbp+24], ..... 

; rax Valeur de retour des fonctions 

; mov edi, 40; malloc's first (and only) parameter: number of bytes to allocate
; extern malloc
; call malloc
;  on return, rax points to our newly-allocated memory

;================ MAIN ====================
section .text
	global ft_strdup
	extern malloc
	extern ft_strlen
	extern ft_strcpy
	extern __errno_location

ft_strdup:
	push rdi
	call ft_strlen
	mov r15, rdi
	inc rax
	mov rdi, rax
	call malloc
	je erro
	mov rdi, rax ;dst
	mov rsi, r15 ;src
	call ft_strcpy
	pop rdi
	ret

erro:
	neg rax
    	push rax
	call __errno_location
	pop rbx
	mov [rax], rbx
	mov rax, '\0'
    	ret