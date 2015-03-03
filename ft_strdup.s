segment .text
    global  _ft_strdup
    extern  _ft_strlen
    extern  _malloc

_ft_strdup:
    mov     r12, rdi
    call    _ft_strlen
    inc     rax
    mov     r13, rax
    mov     rdi, rax
    call    _malloc
    cmp     rax, 0
    je      done
    mov     r10, rax
    mov     rdi, rax
    mov     rsi, r12
    mov     rcx, r13
    rep     movsb
    mov     rdi, 0
    mov     rax, r10
    mov     rdi, r12

done:
    ret
