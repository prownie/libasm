	global _ft_write
	section .text
        extern ___error
_ft_write:
        mov rax, 0x2000004
        syscall
        jc _error_write
        ret

_error_write:
        mov    rdi, rax             ; tmp pour errno
        call    ___error            ; recup adress errno
        mov    [rax], rdi           ; errno dans pointeur errno (valeur de retour de ___error)
        mov    rax, -1              ; retourner -1 pour erreur
        ret
