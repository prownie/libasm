	global _ft_read
	section .text
	extern ___error

_ft_read:
	mov rax, 0x2000003
	syscall
	jc _error_read
	ret

_error_read:
        mov    rdi, rax             ; tmp pour errno
        call    ___error            ; recup adress errno
        mov    [rax], rdi           ; errno dans pointeur errno (valeur de retour de ___error)
        mov    rax, -1              ; retourner -1 pour erreur
        ret
