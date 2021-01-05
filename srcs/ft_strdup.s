section .text
	global _ft_strdup
	extern _ft_strlen
	extern _ft_strcpy
	extern _malloc

_ft_strdup:
	call _ft_strlen ;rax = strlen
	push rdi
	mov rdi, rax
	inc rdi; +1 for \0
	call _malloc
	cmp rax, 0
	je _error_ft_strdup
	pop rdi
	mov		rsi, rdi				; rsi (src) == rdi (str)
	mov		rdi, rax				; rdi (dest) == malloc string
	call	_ft_strcpy				; send all to function strcpy
	mov rax, rsi
	ret

_error_ft_strdup:
	xor	rax, rax; rax = 0
	ret
