	global _ft_strcmp
	section .text
_ft_strcmp:
	xor		rax, rax
_loop_ft_strcmp:
	mov	al, [rdi]
	cmp	[rsi], al
	jne _end_ft_strcmp
	inc rdi
	inc rsi
	cmp BYTE[rdi], 0
	je _end_ft_strcmp
	cmp BYTE[rsi], 0
	je _end_ft_strcmp
	jmp _loop_ft_strcmp
_end_ft_strcmp:
	movzx rax, BYTE[rdi]
	movzx rcx, BYTE[rsi]
	sub rax, rcx
	ret



;section .text
;		global _ft_strcmp
;
;_ft_strcmp:									; *s1 = rdi, *s2 = rsi
;		xor rax, rax						; i = 0;
;
;_ft_strcmp_loop:
;		mov	al, [rdi]						; char c = *s1
;		cmp	[rsi], al						; char c == *s2
;		jne	end								; c != *s2 jmp end
;		inc	rdi								; *s1++
;		inc	rsi								; *s2++
;		cmp	BYTE[rdi], 0					; *s1 == '\0' ?
;		je	end								; *s1 == '\0' jmp end
;		cmp	BYTE[rsi], 0					; *s2 == '\0' ?
;		je	end								; *s2 == '\0' jmp end
;		jmp	_ft_strcmp_loop					; loop _ft_strcmp_loop
;
;end:
;		movzx	rax, BYTE[rdi]				; char i = *s1
;		movzx	rdx, BYTE[rsi]				; char y = *s2
;		sub		rax, rdx					; i = i - y
;		ret
