	bits 64

	global syscall6

	;;  now i need to shift every register back since rax is being a sore loser
	;; arch	syscall NR	return	arg0	arg1	arg2	arg3	arg4	arg5
	;;  x86_64	rax		rax	rdi	rsi	rdx	r10	r8	r9
syscall6:
	mov rax, rdi
	mov rdi, rsi
	mov rsi, rdx
	mov rdx, rcx
	mov r10, r8
	mov r8, r9

	syscall
	ret
