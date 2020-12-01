	global _ft_strcmp
	section .text
_ft_strcmp:
	xor		rax, rax
_loop_ft_strcmp:
	mov al, [rsi]
	cmp [rdi], al
	jne _end_ft_strcmp
	inc rsi
	inc rdi
	cmp byte [rdi], 0
	je _end_ft_strcmp
	cmp byte [rsi], 0
	je _end_ft_strcmp
	jmp _loop_ft_strcmp
_end_ft_strcmp:
	movzx rax, byte[rdi]
	movzx rbx, byte[rsi]
	sub rax, rbx
	ret


