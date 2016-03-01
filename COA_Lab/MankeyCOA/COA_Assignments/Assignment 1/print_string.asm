		.text

main:
		la $a0, hello_string
		li $v0, 4
		syscall
		
		li $v0, 10
		syscall
		
		.data
hello_string:		.asciiz "Hello World \n"