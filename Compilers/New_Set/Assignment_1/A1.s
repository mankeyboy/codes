	.file	"A1.c"													# source file name
	.section	.rodata												# read-only data section
.LC0:																# Label of f-string-1st printf
	.string	"Enter the order: "										
.LC1:																# Label of f-string scanf
	.string	"%d"													
.LC2:																# Label of f-string-2nd printf
	.string	"Enter matix A in row-major: "							
.LC3:																# Label of f-string-3rd printf
	.string	"Enter matix B in row-major: "							
.LC4:																# Label of f-string-4th printf
	.string	"The output matrix is:"									
.LC5:																# Label of f-string-5th printf
	.string	"%d "													
	.text															# Code Starts
	.globl	main													# main is a global name
	.type	main, @function											# main is a function
main:																# main function starts
.LFB0:																
	.cfi_startproc													# It is a directive
	pushq	%rbp													# Save old base pointer
	.cfi_def_cfa_offset 16											# It is a directive
	.cfi_offset 6, -16												# It is a directive
	movq	%rsp, %rbp												# rbp <-- rsp
	.cfi_def_cfa_register 6											# It is a directive
	subq	$4816, %rsp												# Allocating space for Matrix A,Matrix B,Matrix C and local variables
	movl	$.LC0, %edi												# value of .LC0 is stored into %edi
	movl	$0, %eax                         						# Sets %eax to 0 
	call	printf                           						# Call printf 
	leaq	-4812(%rbp), %rax                						# %rax is now the address of n	which is the order of the matrix
	movq	%rax, %rsi                       						# set %rax to %rsi
	movl	$.LC1, %edi                      						# value of .LC1 is stored into %edi
	movl	$0, %eax                         						# Sets %eax to 0
	call	__isoc99_scanf                   						# Calls scanf to read the value of n
	movl	$.LC2, %edi                      						# value of .LC2 is stored into %edi
	movl	$0, %eax                         						# Sets %eax to 0
	call	printf                           						# Calls printf
	movl	-4812(%rbp), %eax                						# %eax stores the value of n
	leaq	-4800(%rbp), %rdx                						# %rdx stores the address of Matrix A.
	movq	%rdx, %rsi                       						# %rsi has the pointer to Matrix A
	movl	%eax, %edi                       						# %edi stores the value of %eax i.e n.
	call	ReadMatrix                       						# Calls ReadMatrix
	movl	$.LC3, %edi                      						# value of .LC3 is stored into %edi
	movl	$0, %eax                         						# Sets %eax to 0
	call	printf                           						# Prints "Enter Matrix in Row Major order"
	movl	-4812(%rbp), %eax                						# %eax stores the value of n
	leaq	-3200(%rbp), %rdx                						# %rdx stores the address of the pointer to Matrix B
	movq	%rdx, %rsi                       						# %rsi holds the value of %rdx
	movl	%eax, %edi                       						# %edi holds the value of n
	call	ReadMatrix                       						# Calls the ReadMatrix as above
	movl	-4812(%rbp), %eax                						# eax holds the value of n
	leaq	-1600(%rbp), %rcx                						# %rcx holds the pointer to final matrix.
	leaq	-3200(%rbp), %rdx                						# %rdx holds the pointer to Matrix B. 
	leaq	-4800(%rbp), %rsi                						# %rsi holds the pointer to Matrix A.
	movl	%eax, %edi                       						# %edi holds the value of n
	call	MultiplyMatrix                   						# Calls MultiplyMatrix function
	movl	$.LC4, %edi                      						# value of .LC4 is stored into %edi
	call	puts                             						# Prints "The output matrix is:"
	movl	$0, -4808(%rbp)                  						# Sets i to 0
	jmp	.L2                                  						# Jumps to line L2
.L5:                                         						 
	movl	$0, -4804(%rbp)                  						# Sets j to 0
	jmp	.L3                                  						# Jumps to Line L3
.L4:                                         						 
	movl	-4804(%rbp), %eax                						# %eax stores the value of j
	movslq	%eax, %rcx                       						# Converts j to 64bit and stores in %rcx
	movl	-4808(%rbp), %eax                						# %eax stores the value of i
	movslq	%eax, %rdx                       						# Converts i to 64 bit and stores in %rdx
	movq	%rdx, %rax                       						# %rax holds the value of %rdx
	salq	$2, %rax                         						# %rax is multiplied by 4
	addq	%rdx, %rax												# %rax += %rdx
	salq	$2, %rax 												# %rax is multiplied by 4
	addq	%rcx, %rax												# %rax += %rcx
	movl	-1600(%rbp,%rax,4), %eax
	movl	%eax, %esi												# esi <-- data[i][j]
	movl	$.LC5, %edi												# value of .LC5 is stored into %edi
	movl	$0, %eax												# Sets %eax to 0
	call	printf													# Call printf 
	addl	$1, -4804(%rbp)											# increments the value of j
.L3:
	movl	-4812(%rbp), %eax										# %eax stores the value of n
	cmpl	%eax, -4804(%rbp) 										# Compare j and n and check if j<n
	jl	.L4 														# jumps to L4 if j < n
	movl	$10, %edi 												# Sets %edi to 10
	call	putchar													# calls putchar
	addl	$1, -4808(%rbp)											# increments the value of i
.L2:
	movl	-4812(%rbp), %eax										# %eax stores the value of n
	cmpl	%eax, -4808(%rbp) 										# Compare i and n and check if i<n
	jl	.L5 														# jumps to L5 if i < n
	movl	$0, %eax												# Sets %eax to 0
	leave															# Clear stack
	.cfi_def_cfa 7, 8												# It is a directive
	ret 															# Return
	.cfi_endproc													# It is a directive
.LFE0:
	.size	main, .-main 											# "here" minus address of main
	.section	.rodata 											# read-only data section
.LC6: 																# Label of f-string-6th printf
	.string	"The input matrix is:"
	.text
	.globl	ReadMatrix 												# ReadMatrix is a global name
	.type	ReadMatrix, @function 									# ReadMatrix is a function
ReadMatrix:
.LFB1:
	.cfi_startproc													# It is a directive
	pushq	%rbp													# Save old base pointer
	.cfi_def_cfa_offset 16											# It is a directive
	.cfi_offset 6, -16												# It is a directive
	movq	%rsp, %rbp												# rbp <-- rsp
	.cfi_def_cfa_register 6											# It is a directive
	subq	$32, %rsp                       						# Create space for storing local variables
	movl	%edi, -20(%rbp)                 						# n stores in %edi
	movq	%rsi, -32(%rbp)                 						# pointer to array is stored in this location
	movl	$0, -8(%rbp)                    						# sets value of i to 0
	jmp	.L8                                  						# Jumps to line L8
.L11:
	movl	$0, -4(%rbp)				    						# sets value of j to 0
	jmp	.L9                                  						# Jumps to line L9
.L10:
	movl	-8(%rbp), %eax                  						# saves value of i to eax
	movslq	%eax, %rdx 					    						# coverts 32 bit eax to 64 bit rdx and stores the address of eax
	movq	%rdx, %rax  				    						# moves the value of rdx to rax
	salq	$2, %rax 												# %rax is multiplied by 4
	addq	%rdx, %rax 												# %rax += %rdx
	salq	$4, %rax 												# %rax is multiplied by 16
	movq	%rax, %rdx 												# moves the value of rax to rdx
	movq	-32(%rbp), %rax 										# Address of array stored in rax
	addq	%rax, %rdx 												# %rdx += %rax
	movl	-4(%rbp), %eax 											# %eax stores the value of j
	cltq 															# Converts int to 64 bit and stores in rax
	salq	$2, %rax  					    						# %rax is multiplied by 4
	addq	%rdx, %rax  				    						# %rax += %rdx
	movq	%rax, %rsi 					    						# moves the value of rax to rsi
	movl	$.LC1, %edi  				    						# value of .LC1 is stored into %edi
	movl	$0, %eax 					    						# sets value of eax to 0
	call	__isoc99_scanf 				    						# calls the scanf function
	addl	$1, -4(%rbp) 				    						# increments the value of j
.L9:
	movl	-4(%rbp), %eax 				    						# moves value of j to eax
	cmpl	-20(%rbp), %eax                 						# Compare j and n and check if j<n 
	jl	.L10														# jumps to L10 if j<n
	addl	$1, -8(%rbp)                    						# increments the value of i
.L8:
	movl	-8(%rbp), %eax                  						# moves value of i to eax
	cmpl	-20(%rbp), %eax											# Compare j and n and check if i<n 
	jl	.L11														# jumps to L11 if i<n
	movl	$.LC6, %edi                     						# value of .LC1 is stored into %edi
	call	puts                            						# i.e prints the  "the input matrix is:"
	movl	$0, -8(%rbp)                    						# sets value of j to 0
	jmp	.L12                                						# jumps to L12 
.L15:
	movl	$0, -4(%rbp)                    						# sets value of j to 0
	jmp	.L13                                						# Jumps to L13
.L14:
	movl	-8(%rbp), %eax                  						# %eax stores the value of i
	movslq	%eax, %rdx                     							# i is converted to 64 bit and is stored in &rdx
	movq	%rdx, %rax                      						# moves the value of rdx to rax
	salq	$2, %rax 												# %rax is multiplied by 4
	addq	%rdx, %rax 												# %rax += %rdx
	salq	$4, %rax  												# %rax is multiplied by 16
	movq	%rax, %rdx 												# moves the value of rax to rdx
	movq	-32(%rbp), %rax 										# Store the address of array in rax
	addq	%rax, %rdx 												# %rdx += %rax
	movl	-4(%rbp), %eax 											# %eax stores the value of j
	cltq 															# Converts int to 64 bit and stores in rax
	movl	(%rdx,%rax,4), %eax 									# %eax <-- (%rdx + %rax * 4)
	movl	%eax, %esi 												# %esi <-- data [i][j]
	movl	$.LC5, %edi 											# value of .LC5 is stored into %edi
	movl	$0, %eax												# Sets %eax to 0
	call	printf													# Call printf 
	addl	$1, -4(%rbp)                   							# increments the value of j
.L13:
	movl	-4(%rbp), %eax                 							# moves value of j to eax
	cmpl	-20(%rbp), %eax 										# Compare j and n and check if j<n 
	jl	.L14 														# jumps to L14 if j<n
	movl	$10, %edi 												# Sets %edi to 10
	call	putchar 												# calls putchar
	addl	$1, -8(%rbp)											# increments the value of i
.L12:
	movl	-8(%rbp), %eax				   							# moves value of i to eax
	cmpl	-20(%rbp), %eax                							# Compare i and n and check if i<n 
	jl	.L15 														# jumps to L15 if i<n
	leave 															# Clear stack
	.cfi_def_cfa 7, 8												# It is a directive
	ret 															# Return
	.cfi_endproc													# It is a directive
.LFE1:
	.size	ReadMatrix, .-ReadMatrix
	.section	.rodata 											# read-only data section
.LC7:
	.string	"The transposed matrix is:" 							# Label of f-string-1st printf
	.text
	.globl	TransposeMatrix 										# TransposeMatrix is a global name
	.type	TransposeMatrix, @function 								# TransposeMatrix is a function
TransposeMatrix:
.LFB2:
	.cfi_startproc													# It is a directive
	pushq	%rbp                          							# Saves the stack base pointer 
	.cfi_def_cfa_offset 16											# It is a directive
	.cfi_offset 6, -16												# It is a directive
	movq	%rsp, %rbp                    							# moves the value of rsp to rbp
	.cfi_def_cfa_register 6											# It is a directive
	subq	$32, %rsp                     							# Create space for storing local variables
	movl	%edi, -20(%rbp)               							# %edi is the first parmeter and is assigned in the stack
	movq	%rsi, -32(%rbp)               							# %rsi stores the second argument i.e pointer to the data array  
	movl	$0, -12(%rbp)                 							# i is said to 0
	jmp	.L17                              							# Jumps to line 17
.L20:
	movl	$0, -8(%rbp)                  							# sets j to 0 and jumps to Line 18
	jmp	.L18                                  						# Jumps to line L2
.L19:
	movl	-12(%rbp), %eax               							# %eax holds the value of i 
	movslq	%eax, %rdx                   	 						# i is converted to 64 bit and stored in %rdx
	movq	%rdx, %rax                    							# moves the value of rdx to rax
	salq	$2, %rax                      							# %rax is multiplied by 4
	addq	%rdx, %rax                    							# %rax += %rdx
	salq	$4, %rax                      							# %rax is multiplied by 16
	movq	%rax, %rdx                    							# moves the value of rax to rdx
	movq	-32(%rbp), %rax               							# space for temporary variables
	addq	%rax, %rdx                    							# %rdx += %rax
	movl	-8(%rbp), %eax                							# eax stores the value of i
	cltq 															# Converts int to 64 bit and stores in rax
	movl	(%rdx,%rax,4), %eax           							# rdx + rax * 4 is set the value of eax
	movl	%eax, -4(%rbp)                							# this value is stored into -4 of %rbp	
	movl	-12(%rbp), %eax               							# eax gets the value of j
	movslq	%eax, %rdx                    							# eax is converted to 64 bit  
	movq	%rdx, %rax 												# moves the value of rdx to rax
	salq	$2, %rax 												# %rax is multiplied by 4
	addq	%rdx, %rax   											# %rax += %rdx
	salq	$4, %rax 												# %rax is multiplied by 16
	movq	%rax, %rdx 												# moves the value of rax to rdx
	movq	-32(%rbp), %rax 										# Storing the address of array in rax
	leaq	(%rdx,%rax), %rcx 										# %rcx = %rdx + %rax
	movl	-8(%rbp), %eax 											# %eax stores the value of j
	movslq	%eax, %rdx 												# Converts j to 64 bit int and stores in %rdx
	movq	%rdx, %rax 												# moves the value of rdx to rax
	salq	$2, %rax 												# %rax is multiplied by 4
	addq	%rdx, %rax 												# %rax += %rdx
	salq	$4, %rax 												# %rax is multiplied by 16
	movq	%rax, %rdx 												# moves the value of rax to rdx
	movq	-32(%rbp), %rax 										# address of array stored in rax
	addq	%rax, %rdx 												# %rdx += %rax
	movl	-12(%rbp), %eax 										# eax stores the value of i
	cltq 															# Converts int to 64 bit and stores in rax
	movl	(%rdx,%rax,4), %edx 									# %edx <-- (%rdx + %rax * 4)
	movl	-8(%rbp), %eax 											# eax stores the value of j
	cltq 															# Converts int to 64 bit and stores in rax
	movl	%edx, (%rcx,%rax,4) 									# (%rdx + %rax * 4) <-- %edx
	movl	-8(%rbp), %eax 											# eax stores the value of j
	movslq	%eax, %rdx 												# Converts j to 64 bit int and stores in %rdx
	movq	%rdx, %rax 												# moves the value of rdx to rax
	salq	$2, %rax 												# %rax is multiplied by 4
	addq	%rdx, %rax 												# %rax += %rdx
	salq	$4, %rax 												# %rax is multiplied by 16
	movq	%rax, %rdx 												# moves the value of rax to rdx
	movq	-32(%rbp), %rax 										# address of array stored in rax
	leaq	(%rdx,%rax), %rcx 										# %rcx = %rdx + %rax
	movl	-12(%rbp), %eax 										# eax stores the value of i
	cltq 															# Converts int to 64 bit and stores in rax
	movl	-4(%rbp), %edx 											# %edx <--data[i][j]
	movl	%edx, (%rcx,%rax,4) 									# data[j][i] <- %edx
	addl	$1, -8(%rbp)											# increments the value of j
.L18:
	movl	-8(%rbp), %eax         									# moves value of j to eax
	cmpl	-12(%rbp), %eax 										# Compare j and n and check if j<n
	jl	.L19 														# jumps to L19 if j<n
	addl	$1, -12(%rbp)          									# increments the value of i
.L17:
	movl	-12(%rbp), %eax        									# moves value of i to eax
	cmpl	-20(%rbp), %eax 										# Compare i and n and check if i<n
	jl	.L20 														# jumps to L20 if i<n
	movl	$.LC7, %edi 											# value of .LC7 is stored into %edi
	call	puts													# call puts for print
	movl	$0, -12(%rbp) 											# sets value of i to 0
	jmp	.L21                                  						# Jumps to line L21
.L24:
	movl	$0, -8(%rbp) 											# sets value of j to 0
	jmp	.L22                                  						# Jumps to line L22
.L23:
	movl	-12(%rbp), %eax 	 									# %eax stores the value of i									
	movslq	%eax, %rdx 												# Converts i to 64 bit int and stores in %rdx
	movq	%rdx, %rax 												# moves the value of rdx to rax
	salq	$2, %rax 												# %rax is multiplied by 4
	addq	%rdx, %rax 												# %rax += %rdx
	salq	$4, %rax 												# %rax is multiplied by 16
	movq	%rax, %rdx 												# moves the value of rax to rdx
	movq	-32(%rbp), %rax 										# address of array stored in rax
	addq	%rax, %rdx 												# %rdx += %rax
	movl	-8(%rbp), %eax 											# %eax stores the value of j
	cltq 															# Converts int to 64 bit and stores in rax
	movl	(%rdx,%rax,4), %eax 									# %eax <-- (%rdx + %rax * 4)
	movl	%eax, %esi 												# moves value of eax to esi
	movl	$.LC5, %edi 											# value of .LC5 is stored into %edi
	movl	$0, %eax 												# Sets %eax to 0
	call	printf													# Call printf
	addl	$1, -8(%rbp)											# increments the value of j
.L22:
	movl	-8(%rbp), %eax 											# moves value of j to eax
	cmpl	-20(%rbp), %eax 										# Compare j and n and check if j<n
	jl	.L23 														# jumps to L23 if j<n
	movl	$10, %edi 						 						# Sets %edi to 10						
	call	putchar 												# calls putchar
	addl	$1, -12(%rbp)											# increments the value of i
.L21:
	movl	-12(%rbp), %eax 										# moves value of i to eax
	cmpl	-20(%rbp), %eax 										# Compare i and n and check if i<n
	jl	.L24 														# jumps to L20 if i<n
	leave 															# Clear stack
	.cfi_def_cfa 7, 8												# It is a directive
	ret 															# Return
	.cfi_endproc													# It is a directive
.LFE2:
	.size	TransposeMatrix, .-TransposeMatrix 						# "here" minus address of "TransposeMatrix" 
	.globl	VectorMultiply 											# VectorMultiply is a global name
	.type	VectorMultiply, @function 								# VectorMultiply is a function
VectorMultiply:
.LFB3:
	.cfi_startproc													# It is a directive
	pushq	%rbp 													# Old base pointer saved
	.cfi_def_cfa_offset 16											# It is a directive
	.cfi_offset 6, -16												# It is a directive
	movq	%rsp, %rbp 												# rbp <-- rsp
	.cfi_def_cfa_register 6											# It is a directive
	movl	%edi, -20(%rbp) 										# stores the n in stack at rbp -20
	movq	%rsi, -32(%rbp) 										# stores the address of matrix A in stack at rbp -32
	movq	%rdx, -40(%rbp)											# stores the address of matrix A in stack at rbp -40
	movl	$0, -4(%rbp) 											# result <-- 0
	movl	$0, -8(%rbp) 											# i is set to 0
	jmp	.L26                                  						# Jumps to line L26
.L27:
	movl	-8(%rbp), %eax 											# %eax stores the value of i
	cltq 															# Converts int to 64 bit and stores in rax
	leaq	0(,%rax,4), %rdx 										# %rdx is multiplied by 4
	movq	-32(%rbp), %rax 										# %rax stores address of matrix A
	addq	%rdx, %rax 												# %rax += %rdx
	movl	(%rax), %edx 											# %edx <-- (rax), L[i]
	movl	-8(%rbp), %eax 											# %eax stores the value of i
	cltq 															# Converts int to 64 bit and stores in rax
	leaq	0(,%rax,4), %rcx										# %rcx is multiplied by 4
	movq	-40(%rbp), %rax 										# %rax stores the address of matrix B
	addq	%rcx, %rax 												# %rax += %rdx
	movl	(%rax), %eax 											# %eax <-- (rax), R[i]
	imull	%edx, %eax 												# %eax *= %edx
	addl	%eax, -4(%rbp) 											# result += L[i]R[i]
	addl	$1, -8(%rbp) 											# i is incremented by 1
.L26:
	movl	-8(%rbp), %eax 											# %eax stores the value of i
	cmpl	-20(%rbp), %eax 										# comare i and n and check if i<n
	jl	.L27 														# Move to L27 if i<n
	movl	-4(%rbp), %eax 											# %eax stores result
	popq	%rbp 													# pop rbp from stack
	.cfi_def_cfa 7, 8												# It is a directive
	ret 															# Return
	.cfi_endproc													# It is a directive
.LFE3:
	.size	VectorMultiply, .-VectorMultiply 						# "here" minus address of "VectorMultiply"  
	.globl	MultiplyMatrix 											# MultiplyMatrix is a global name
	.type	MultiplyMatrix, @function 								# MultiplyMatrix is a function
MultiplyMatrix:
.LFB4:
	.cfi_startproc													# It is a directive
	pushq	%rbp 													# Old base pointer saved
	.cfi_def_cfa_offset 16											# It is a directive
	.cfi_offset 6, -16												# It is a directive
	movq	%rsp, %rbp 												# rbp <-- rsp
	.cfi_def_cfa_register 6											# It is a directive
	pushq	%rbx 													# push rbx into stack
	subq	$56, %rsp 												# Create space for storing local variables
	.cfi_offset 3, -24 												# It is a directive
	movl	%edi, -36(%rbp) 										# stores the n in stack at rbp -36
	movq	%rsi, -48(%rbp) 										# stores the address of matrix A in stack at rbp -48
	movq	%rdx, -56(%rbp) 										# stores the address of matrix B in stack at rbp -56
	movq	%rcx, -64(%rbp) 										# stores the address of final matrix in stack at rbp -64
	movq	-56(%rbp), %rdx 										# %rdx stores the address of the matrix B
	movl	-36(%rbp), %eax 										# %eax stores the value of n
	movq	%rdx, %rsi 												# %rsi stores the address of the matrix B
	movl	%eax, %edi 												# %eax stores the value of n
	call	TransposeMatrix 										# calls TransposeMatrix	
	movl	$0, -24(%rbp) 											# sets value of i to 0
	jmp	.L30 														# Jump to L30
.L33:
	movl	$0, -20(%rbp) 											# sets value of i to 0
	jmp	.L31														# Jump to L31
.L32:
	movl	-24(%rbp), %eax 										# %eax stores the value of i
	movslq	%eax, %rdx 												# Converts i to 64 bit int and stores in %rdx
	movq	%rdx, %rax 												# moves the value of rdx to rax
	salq	$2, %rax 												# %rax is multiplied by 4
	addq	%rdx, %rax 												# %rax += %rdx
	salq	$4, %rax 												# %rax is multiplied by 16
	movq	%rax, %rdx 												# moves the value of rax to rdx
	movq	-64(%rbp), %rax 										# rax stores the address of final array
	leaq	(%rdx,%rax), %rbx 										# %rbx = %rdx + %rax
	movl	-20(%rbp), %eax 										# %eax stores the value of j
	movslq	%eax, %rdx 												# Converts j to 64 bit int and stores in %rdx	
	movq	%rdx, %rax 												# moves the value of rdx to rax
	salq	$2, %rax 												# %rax is multiplied by 4
	addq	%rdx, %rax 												# %rax += %rdx
	salq	$4, %rax 												# %rax is multiplied by 16
	movq	%rax, %rdx 												# moves the value of rax to rdx
	movq	-56(%rbp), %rax 										# rax stores the address of array B
	addq	%rdx, %rax 												# %rax += %rdx
	movq	%rax, %rsi 												# moves the value of rax to rsi
	movl	-24(%rbp), %eax 										# %eax stores the value of i
	movslq	%eax, %rdx 												# Converts i to 64 bit int and stores in %rdx	
	movq	%rdx, %rax 												# moves the value of rdx to rax
	salq	$2, %rax 												# %rax is multiplied by 4
	addq	%rdx, %rax 												# %rax += %rdx
	salq	$4, %rax 												# %rax is multiplied by 16
	movq	%rax, %rdx 												# moves the value of rax to rdx
	movq	-48(%rbp), %rax 										# rax stores the address of array A
	addq	%rdx, %rax 												# %rax += %rdx
	movq	%rax, %rcx 												# moves the value of rax to rcx
	movl	-36(%rbp), %eax 										# %eax stores the value of n
	movq	%rsi, %rdx 												# moves the value of rdx to rsi
	movq	%rcx, %rsi												# moves the value of rsi to rcx
	movl	%eax, %edi 												# %eax stores the value of n
	call	VectorMultiply 											# call VectorMultiply
	movl	-20(%rbp), %edx 										# %eax stores the value of j
	movslq	%edx, %rdx 												# Converts j to 64 bit int and stores in %rdx	
	movl	%eax, (%rbx,%rdx,4) 									# M[i][j] <-- Result
	addl	$1, -20(%rbp) 											# Increment j by 1
.L31:
	movl	-20(%rbp), %eax 										# %eax stores the value of j
	cmpl	-36(%rbp), %eax 										# Compare j and n and check if j<n
	jl	.L32 														# Jump to L32 if j<n
	addl	$1, -24(%rbp) 											# Increment i by 1
.L30:
	movl	-24(%rbp), %eax 										# %eax stores the value of i
	cmpl	-36(%rbp), %eax 										# Compare i and n and check if i<n
	jl	.L33 														# Jump to L33 if i<n
	addq	$56, %rsp 												# move rsp by 56. Stack is deallocated.
	popq	%rbx 													# pop rbx from stack
	popq	%rbp 													# pop rbp from stack
	.cfi_def_cfa 7, 8												# It is a directive
	ret                              								# Return
	.cfi_endproc													# It is a directive
.LFE4:
	.size	MultiplyMatrix, .-MultiplyMatrix 						# "here" minus address of "MultiplyMatrix"  
	.ident	"GCC: (Ubuntu 4.8.2-19ubuntu1) 4.8.2"
	.section	.note.GNU-stack,"",@progbits
