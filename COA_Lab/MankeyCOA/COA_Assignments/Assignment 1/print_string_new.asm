		.data
int_str:	.asciiz	"%d"

		.text
		.macro print_int($arg)
		la $a0, int_str
		mov $a1, $arg
		jal printf
		.end_macro
main:
		li $t0, 5
		print_int($t0)