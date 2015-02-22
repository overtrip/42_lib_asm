segment	.text
	global	_ft_strcat

_ft_strcat:
	mov			r10,rdi

loop:
	cmp byte	[rdi],0
	je			srcfull
	inc 		rdi
	jmp			loop

srcfull:
	cmp	byte	[rsi],0
	je			done
	mov			r8, [rsi]
	mov			[rdi], r8
	inc 		rdi
	inc			rsi
	jmp			srcfull

done:
	mov	byte	[rdi], 0
	mov			rax,r10
	ret
