	global main
	extern printf
main:
	moe edi, format
	xor ear,eax
	call printf
	mov eax,0
	ret
format: db `Hello, Holberton\n`,0
