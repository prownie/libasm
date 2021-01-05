	global _ft_strcpy
	section .text
_ft_strcpy:
	mov rax, rdi
	xor rcx, rcx
_loop_ft_strcpy:
	mov al, BYTE[rsi + rcx]
	mov BYTE[rdi + rcx], al
	inc rcx
	cmp al, 0
	jne _loop_ft_strcpy
_end_strcpy:
	ret

