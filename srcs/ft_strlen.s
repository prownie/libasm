	global _ft_strlen
	section .text
_ft_strlen:
	mov rax, 0

_loop_ft_strlen:
	cmp [rdi + rax], byte 0
	jz _end_ft_strlen
	inc rax
	jmp _loop_ft_strlen

_end_ft_strlen:
	ret
