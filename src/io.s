bits 64

global write

; not documented because i didnt do it when i made it and i dont wanna document it now
write:
	mov rax, 1
	mov rdx, rsi
	mov rsi, rdi
	mov rdi, 1
	syscall
	ret

global read

; extern void read(char *buf, unsigned long long size);
; i.e. buf -> rdi          size -> rsi


; but we need: rsi -> buf          rdx -> size
; so move rsi to r8, rdi to rsi, r8 to rdx
; reshuffling ^ 

read:
	mov rax, 0
	mov r8, rsi
	mov rsi, rdi
	mov rdx, r8
	mov rdi, 0
	syscall 
	ret


global syscall
	;;  RDI, RSI, RDX, RCX, R8, R9
syscall:
	mov rdi, rdi
	mov rsi, rsi
	mov rdx, rdx
	mov rcx, rcx
	mov r8, r8
	mov r9, r9

	syscall
	ret
