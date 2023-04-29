section		.string
	extern	printf
	global	main
main:
	mov	eax, 0
	mov	edi, text
	call	printf

section		.format
	text db 'Hello, Holberton\n', 0
