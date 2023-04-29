section		.string
	extern	printf
	global	main
main:
	mov		edi, text
	xor		eax, eax
	call	printf
	mov		eax, 0
	ret

section		.format
	text: db 'Hello, Holberton', 0xa, 0
