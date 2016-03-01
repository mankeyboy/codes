	.file	"ass1_13CS30021.c"
	.section	.rodata
.LC0:
	.string	"Enter the order: "
.LC1:
	.string	"%d"
.LC2:
	.string	"Enter matix A in row-major: "
.LC3:
	.string	"Enter matix B in row-major: "
.LC4:
	.string	"The output matrix is:"
.LC5:
	.string	"%d "
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$4832, %esp
	movl	$.LC0, (%esp)
	call	printf
	leal	20(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$.LC1, (%esp)
	call	__isoc99_scanf
	movl	$.LC2, (%esp)
	call	printf
	movl	20(%esp), %eax
	leal	32(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	ReadMatrix
	movl	$.LC3, (%esp)
	call	printf
	movl	20(%esp), %eax
	leal	1632(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	ReadMatrix
	movl	20(%esp), %eax
	leal	3232(%esp), %edx
	movl	%edx, 12(%esp)
	leal	1632(%esp), %edx
	movl	%edx, 8(%esp)
	leal	32(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	MultiplyMatrix
	movl	$.LC4, (%esp)
	call	puts
	movl	$0, 24(%esp)
	jmp	.L2
.L5:
	movl	$0, 28(%esp)
	jmp	.L3
.L4:
	movl	24(%esp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$2, %eax
	movl	28(%esp), %edx
	addl	%edx, %eax
	movl	3232(%esp,%eax,4), %eax
	movl	%eax, 4(%esp)
	movl	$.LC5, (%esp)
	call	printf
	addl	$1, 28(%esp)
.L3:
	movl	20(%esp), %eax
	cmpl	%eax, 28(%esp)
	jl	.L4
	movl	$10, (%esp)
	call	putchar
	addl	$1, 24(%esp)
.L2:
	movl	20(%esp), %eax
	cmpl	%eax, 24(%esp)
	jl	.L5
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
.LC6:
	.string	"The input matrix is:"
	.text
	.globl	ReadMatrix
	.type	ReadMatrix, @function
ReadMatrix:
.LFB1:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	$0, -16(%ebp)
	jmp	.L8
.L11:
	movl	$0, -12(%ebp)
	jmp	.L9
.L10:
	movl	-16(%ebp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$4, %eax
	movl	%eax, %edx
	movl	12(%ebp), %eax
	addl	%eax, %edx
	movl	-12(%ebp), %eax
	sall	$2, %eax
	addl	%edx, %eax
	movl	%eax, 4(%esp)
	movl	$.LC1, (%esp)
	call	__isoc99_scanf
	addl	$1, -12(%ebp)
.L9:
	movl	-12(%ebp), %eax
	cmpl	8(%ebp), %eax
	jl	.L10
	addl	$1, -16(%ebp)
.L8:
	movl	-16(%ebp), %eax
	cmpl	8(%ebp), %eax
	jl	.L11
	movl	$.LC6, (%esp)
	call	puts
	movl	$0, -16(%ebp)
	jmp	.L12
.L15:
	movl	$0, -12(%ebp)
	jmp	.L13
.L14:
	movl	-16(%ebp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$4, %eax
	movl	%eax, %edx
	movl	12(%ebp), %eax
	addl	%eax, %edx
	movl	-12(%ebp), %eax
	movl	(%edx,%eax,4), %eax
	movl	%eax, 4(%esp)
	movl	$.LC5, (%esp)
	call	printf
	addl	$1, -12(%ebp)
.L13:
	movl	-12(%ebp), %eax
	cmpl	8(%ebp), %eax
	jl	.L14
	movl	$10, (%esp)
	call	putchar
	addl	$1, -16(%ebp)
.L12:
	movl	-16(%ebp), %eax
	cmpl	8(%ebp), %eax
	jl	.L15
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1:
	.size	ReadMatrix, .-ReadMatrix
	.section	.rodata
.LC7:
	.string	"The transposed matrix is:"
	.text
	.globl	TransposeMatrix
	.type	TransposeMatrix, @function
TransposeMatrix:
.LFB2:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	$0, -20(%ebp)
	jmp	.L17
.L20:
	movl	$0, -16(%ebp)
	jmp	.L18
.L19:
	movl	-20(%ebp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$4, %eax
	movl	%eax, %edx
	movl	12(%ebp), %eax
	addl	%eax, %edx
	movl	-16(%ebp), %eax
	movl	(%edx,%eax,4), %eax
	movl	%eax, -12(%ebp)
	movl	-20(%ebp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$4, %eax
	movl	%eax, %edx
	movl	12(%ebp), %eax
	leal	(%edx,%eax), %ecx
	movl	-16(%ebp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$4, %eax
	movl	%eax, %edx
	movl	12(%ebp), %eax
	addl	%eax, %edx
	movl	-20(%ebp), %eax
	movl	(%edx,%eax,4), %edx
	movl	-16(%ebp), %eax
	movl	%edx, (%ecx,%eax,4)
	movl	-16(%ebp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$4, %eax
	movl	%eax, %edx
	movl	12(%ebp), %eax
	leal	(%edx,%eax), %ecx
	movl	-20(%ebp), %eax
	movl	-12(%ebp), %edx
	movl	%edx, (%ecx,%eax,4)
	addl	$1, -16(%ebp)
.L18:
	movl	-16(%ebp), %eax
	cmpl	-20(%ebp), %eax
	jl	.L19
	addl	$1, -20(%ebp)
.L17:
	movl	-20(%ebp), %eax
	cmpl	8(%ebp), %eax
	jl	.L20
	movl	$.LC7, (%esp)
	call	puts
	movl	$0, -20(%ebp)
	jmp	.L21
.L24:
	movl	$0, -16(%ebp)
	jmp	.L22
.L23:
	movl	-20(%ebp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$4, %eax
	movl	%eax, %edx
	movl	12(%ebp), %eax
	addl	%eax, %edx
	movl	-16(%ebp), %eax
	movl	(%edx,%eax,4), %eax
	movl	%eax, 4(%esp)
	movl	$.LC5, (%esp)
	call	printf
	addl	$1, -16(%ebp)
.L22:
	movl	-16(%ebp), %eax
	cmpl	8(%ebp), %eax
	jl	.L23
	movl	$10, (%esp)
	call	putchar
	addl	$1, -20(%ebp)
.L21:
	movl	-20(%ebp), %eax
	cmpl	8(%ebp), %eax
	jl	.L24
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE2:
	.size	TransposeMatrix, .-TransposeMatrix
	.globl	VectorMultiply
	.type	VectorMultiply, @function
VectorMultiply:
.LFB3:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$16, %esp
	movl	$0, -4(%ebp)
	movl	$0, -8(%ebp)
	jmp	.L26
.L27:
	movl	-8(%ebp), %eax
	leal	0(,%eax,4), %edx
	movl	12(%ebp), %eax
	addl	%edx, %eax
	movl	(%eax), %edx
	movl	-8(%ebp), %eax
	leal	0(,%eax,4), %ecx
	movl	16(%ebp), %eax
	addl	%ecx, %eax
	movl	(%eax), %eax
	imull	%edx, %eax
	addl	%eax, -4(%ebp)
	addl	$1, -8(%ebp)
.L26:
	movl	-8(%ebp), %eax
	cmpl	8(%ebp), %eax
	jl	.L27
	movl	-4(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE3:
	.size	VectorMultiply, .-VectorMultiply
	.globl	MultiplyMatrix
	.type	MultiplyMatrix, @function
MultiplyMatrix:
.LFB4:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	subl	$36, %esp
	.cfi_offset 3, -12
	movl	16(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	TransposeMatrix
	movl	$0, -16(%ebp)
	jmp	.L30
.L33:
	movl	$0, -12(%ebp)
	jmp	.L31
.L32:
	movl	-16(%ebp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$4, %eax
	movl	%eax, %edx
	movl	20(%ebp), %eax
	leal	(%edx,%eax), %ebx
	movl	-12(%ebp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$4, %eax
	movl	%eax, %edx
	movl	16(%ebp), %eax
	addl	%edx, %eax
	movl	%eax, %ecx
	movl	-16(%ebp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$4, %eax
	movl	%eax, %edx
	movl	12(%ebp), %eax
	addl	%edx, %eax
	movl	%ecx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	VectorMultiply
	movl	-12(%ebp), %edx
	movl	%eax, (%ebx,%edx,4)
	addl	$1, -12(%ebp)
.L31:
	movl	-12(%ebp), %eax
	cmpl	8(%ebp), %eax
	jl	.L32
	addl	$1, -16(%ebp)
.L30:
	movl	-16(%ebp), %eax
	cmpl	8(%ebp), %eax
	jl	.L33
	addl	$36, %esp
	popl	%ebx
	.cfi_restore 3
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE4:
	.size	MultiplyMatrix, .-MultiplyMatrix
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
