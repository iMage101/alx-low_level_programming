<<<<<<< HEAD
section .data
	fmt db	"%s", 10, 0
	msg db	"Hello, Holberton", 0

	section .text
	extern printf
	global main

main:
	push	rbp
	mov	rsi, msg
	mov	rdi, fmt
	mov	rax, 0
	call 	printf
	pop	rbp
	mov	rax, 0
=======
SECTION .data
msg:	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0

	SECTION .text
	extern printf
	global main
main:
	mov esi, msg
	mov edi, fmt
	mov eax, 0
	call printf

	mov eax, 0
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	ret
