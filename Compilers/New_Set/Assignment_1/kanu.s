	.file	"assign1.c"                      # source file name
	.section	.rodata                      # read-only data section
.LC0:
	.string	"Enter the order: "              # Label of f-string-1st printf 
.LC1:
	.string	"%d"                             # Label of f-string scanf
.LC2:
	.string	"Enter matix A in row-major: "   # Label of f-string-2nd-printf
.LC3:
	.string	"Enter matix B in row-major: "   # Label of f-string-3rd-printf
.LC4:
	.string	"The output matrix is:"          # Label of f-string-4th-printf
.LC5:
	.string	"%d"                             # Label of f-string-5th-printf
	.text                                    # Code Starts
	.globl	main                             # Main is a global name
	.type	main, @function                  # Main is a function
main:                                        # Main function starts
.LFB0:
	.cfi_startproc
	pushq	%rbp                             # Save old base pointer 	
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp                       # rbp <-- rsp sets the new base pointer
	.cfi_def_cfa_register 6
	subq	$4816, %rsp                      # Allocating space for Matrix A,Matrix B,Matrix C and local variables.
											 # Matrix A,B and C will take 20*20*4 each that is 4800 and then i,j,n which will take 12 more
											 # so we have 4800+12 = 4812 and we take 4816 to allign with 16
	movl	$.LC0, %edi                      # %edi <-- $.LC0 which means Setting %edi to $.LCO, here $.LC0 stores " Enter the order"
	movl	$0, %eax                         # Sets %eax to 0 
	call	printf                           # Calls printf to print %edi which prints " Enter the order"
	leaq	-4812(%rbp), %rax                # %rax is now the address of n	which is the order of the matrix
	movq	%rax, %rsi                       # set %rax (the address of n) to %rsi as 2nd parameter for scanf
	movl	$.LC1, %edi                      # value of .LC1 is stored into %edi that is setting the input format string as 1st parameter
	movl	$0, %eax                         # Sets %eax to 0
	call	__isoc99_scanf                   # Calls scanf to read the value of n.
	movl	$.LC2, %edi                      # %edi stores the string .LC2
	movl	$0, %eax                         # %eax stores the value 0
	call	printf                           # Prints "Enter matix A in row-major:"
	movl	-4812(%rbp), %eax                # %eax stores the value of n
	leaq	-4800(%rbp), %rdx                # %rdx stores the address of Matrix A.
	movq	%rdx, %rsi                       # %rsi has the pointer to Matrix A
	movl	%eax, %edi                       # %edi stores the value of %eax i.e n.
	call	ReadMatrix                       # Calls ReadMatrix function with first parameter n and second parameter pointer to A.
	movl	$.LC3, %edi                      # Stores $.LC3 in %edi
	movl	$0, %eax                
	call	printf                           # Prints "Enter Matrix in Row Major order"
	movl	-4812(%rbp), %eax                # %eax stores the value of n
	leaq	-3200(%rbp), %rdx                # %rdx stores the address of the pointer to Matrix B
	movq	%rdx, %rsi                       # %rsi holds the value of %rdx
	movl	%eax, %edi                       # %edi holds the value of n
	call	ReadMatrix                       # Calls the ReadMatrix as above
	movl	-4812(%rbp), %eax                # eax holds the value of n
	leaq	-1600(%rbp), %rcx                # %rcx holds the address i.e the pinter to the matrix C.
	leaq	-3200(%rbp), %rdx                # %rdx holds the pointer to Matrix B. 
	leaq	-4800(%rbp), %rsi                # %rsi holds the pinter to Matrix A.
	movl	%eax, %edi                       # %edi holds the value of n
	call	MultiplyMatrix                   # Calls the MultiplyMatrix function with arguments edi,rsi,rdx,rcx i.e n,A,B,C.
	movl	$.LC4, %edi                      # Stores the value of .LC$ into %edi
	call	puts                             # Prints the above string i.e "The output matrix is "
	movl	$0, -4808(%rbp)                  #  Sets i to 0
	jmp	.L2                                  # Jumps to line L2
.L5:                                         # Staart of L5
	movl	$0, -4804(%rbp)                  # Sets j to 0
	jmp	.L3                                  # Jumps to Line L3
.L4:                                         # Start of L3
	movl	-4804(%rbp), %eax                # %eax stores the value of j.
	movslq	%eax, %rcx                       # Converts j to 64bit and stores in %rcx
	movl	-4808(%rbp), %eax                # %eax stores the value of i.
	movslq	%eax, %rdx                       # Converts i to 64 bit and stores in %rdx
	movq	%rdx, %rax                       # %rax holds the value of %rdx
	salq	$2, %rax                         # %rax is multiplied by 4
	addq	%rdx, %rax                       # %
	salq	$2, %rax
	addq	%rcx, %rax
	movl	-1600(%rbp,%rax,4), %eax
	movl	%eax, %esi
	movl	$.LC5, %edi
	movl	$0, %eax
	call	printf
	addl	$1, -4804(%rbp)
.L3:
	movl	-4812(%rbp), %eax              # Compares if j is less than n and jumps accordinglt to L4 
	cmpl	%eax, -4804(%rbp)
	jl	.L4
	movl	$10, %edi
	call	putchar
	addl	$1, -4808(%rbp)                # increments the value of i.
.L2:
	movl	-4812(%rbp), %eax              # Compares if 'i' is less than n and then if true jumps to.L5
	cmpl	%eax, -4808(%rbp)              
	jl	.L5
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
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
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp   
	.cfi_def_cfa_register 6
	subq	$32, %rsp                     # accomodates all the variables 
	movl	%edi, -20(%rbp)               # n stores in %edi
	movq	%rsi, -32(%rbp)               # pointer to array is stored in this location
	movl	$0, -8(%rbp)                  # i is set to zero 
	jmp	.L8                               # jump tp .L8
.L11:
	movl	$0, -4(%rbp)
	jmp	.L9
.L10:
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$4, %rax
	movq	%rax, %rdx
	movq	-32(%rbp), %rax
	addq	%rax, %rdx
	movl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movq	%rax, %rsi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	addl	$1, -4(%rbp)
.L9:
	movl	-4(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jl	.L10
	addl	$1, -8(%rbp)
.L8:
	movl	-8(%rbp), %eax                  # compares i and n and jumps to L11 
	cmpl	-20(%rbp), %eax
	jl	.L11
	movl	$.LC6, %edi                     # Prints the line .LC6
	call	puts                            # i.e prints the  "the input matrix is:"
	movl	$0, -8(%rbp)                    # the value of i is set to 0
	jmp	.L12                                # Jumps to  L12 
.L15:
	movl	$0, -4(%rbp)                    # Sets j to 0
	jmp	.L13                                # Jumps to L13
.L14:
	movl	-8(%rbp), %eax                  # %eax holds the vaalue of i
	movslq	%eax, %rdx                      # i is converted to 64 bit and is stored in &rdx
	movq	%rdx, %rax                      # %raax holds the value of %rdx
	salq	$2, %rax                        # 
	addq	%rdx, %rax
	salq	$4, %rax
	movq	%rax, %rdx
	movq	-32(%rbp), %rax
	addq	%rax, %rdx
	movl	-4(%rbp), %eax
	cltq
	movl	(%rdx,%rax,4), %eax
	movl	%eax, %esi
	movl	$.LC5, %edi
	movl	$0, %eax
	call	printf
	addl	$1, -4(%rbp)                   # increments the j
.L13:
	movl	-4(%rbp), %eax                 # Compares the j and n and goes to L14
	cmpl	-20(%rbp), %eax
	jl	.L14
	movl	$10, %edi
	call	putchar
	addl	$1, -8(%rbp)
.L12:
	movl	-8(%rbp), %eax
	cmpl	-20(%rbp), %eax                # Compares j and n and goes to L15
	jl	.L15
	leave
	.cfi_def_cfa 7, 8
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
	pushq	%rbp                          # Saves the stack base pointer 
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp                    # rbp stores the new rsp
	.cfi_def_cfa_register 6
	subq	$32, %rsp                     # 32 bits 16 bit offset for storing local variables
	movl	%edi, -20(%rbp)               # %edi is the first parmeter and is assigned in the stack
	movq	%rsi, -32(%rbp)               # %rsi stores the second argument i.e pointer to the data array  
	movl	$0, -12(%rbp)                 # i is said to 0
	jmp	.L17                              # Jumps to line 17
.L20:
	movl	$0, -8(%rbp)                  # sets j to 0 and jumps to Line 18
	jmp	.L18 
.L19:
	movl	-12(%rbp), %eax               # %eax holds the value of i 
	movslq	%eax, %rdx                    # i is converted to 64 bit and stored in %rdx
	movq	%rdx, %rax                    # Rax contains the value 
	salq	$2, %rax                      # %rax is multiplted by 2
	addq	%rdx, %rax                    # add %rdx and %rax and stores into %rax
	salq	$4, %rax                      # %rax multipled by 16
	movq	%rax, %rdx                    # rdx stores the value of rax
	movq	-32(%rbp), %rax               # space for temporary variables
	addq	%rax, %rdx                    # adds rax and rdx and stores in to rdx
	movl	-8(%rbp), %eax                # eax stores the value of i.
	cltq
	movl	(%rdx,%rax,4), %eax           # rdx + rax * 4 is set the value of eax
	movl	%eax, -4(%rbp)                # this value is stored into -4 of %rbp	
	movl	-12(%rbp), %eax               # eax gets the value of j
	movslq	%eax, %rdx                    # eax is converted to 64 bit  
	movq	%rdx, %rax                    # 
	salq	$2, %rax
	addq	%rdx, %rax 
	salq	$4, %rax
	movq	%rax, %rdx
	movq	-32(%rbp), %rax
	leaq	(%rdx,%rax), %rcx
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$4, %rax
	movq	%rax, %rdx
	movq	-32(%rbp), %rax
	addq	%rax, %rdx
	movl	-12(%rbp), %eax
	cltq
	movl	(%rdx,%rax,4), %edx
	movl	-8(%rbp), %eax
	cltq
	movl	%edx, (%rcx,%rax,4)
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$4, %rax
	movq	%rax, %rdx
	movq	-32(%rbp), %rax
	leaq	(%rdx,%rax), %rcx
	movl	-12(%rbp), %eax
	cltq
	movl	-4(%rbp), %edx
	movl	%edx, (%rcx,%rax,4)
	addl	$1, -8(%rbp)
.L18:
	movl	-8(%rbp), %eax         # Compares j and n and jumps to L19
	cmpl	-12(%rbp), %eax
	jl	.L19
	addl	$1, -12(%rbp)          # i++
.L17:
	movl	-12(%rbp), %eax        # Compares i and n and jumps to L20
	cmpl	-20(%rbp), %eax        
	jl	.L20
	movl	$.LC7, %edi            
	call	puts
	movl	$0, -12(%rbp)
	jmp	.L21
.L24:
	movl	$0, -8(%rbp)
	jmp	.L22
.L23:
	movl	-12(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$4, %rax
	movq	%rax, %rdx
	movq	-32(%rbp), %rax
	addq	%rax, %rdx
	movl	-8(%rbp), %eax
	cltq
	movl	(%rdx,%rax,4), %eax
	movl	%eax, %esi
	movl	$.LC5, %edi
	movl	$0, %eax
	call	printf
	addl	$1, -8(%rbp)
.L22:
	movl	-8(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jl	.L23
	movl	$10, %edi
	call	putchar
	addl	$1, -12(%rbp)
.L21:
	movl	-12(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jl	.L24
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	TransposeMatrix, .-TransposeMatrix
	.globl	VectorMultiply
	.type	VectorMultiply, @function
VectorMultiply:
.LFB3:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -20(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movl	$0, -4(%rbp)
	movl	$0, -8(%rbp)
	jmp	.L26
.L27:
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-32(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	movq	-40(%rbp), %rax
	addq	%rcx, %rax
	movl	(%rax), %eax
	imull	%edx, %eax
	addl	%eax, -4(%rbp)
	addl	$1, -8(%rbp)
.L26:
	movl	-8(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jl	.L27
	movl	-4(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	VectorMultiply, .-VectorMultiply
	.globl	MultiplyMatrix
	.type	MultiplyMatrix, @function
MultiplyMatrix:
.LFB4:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$56, %rsp
	.cfi_offset 3, -24
	movl	%edi, -36(%rbp)
	movq	%rsi, -48(%rbp)
	movq	%rdx, -56(%rbp)
	movq	%rcx, -64(%rbp)
	movq	-56(%rbp), %rdx
	movl	-36(%rbp), %eax
	movq	%rdx, %rsi
	movl	%eax, %edi
	call	TransposeMatrix
	movl	$0, -24(%rbp)
	jmp	.L30
.L33:
	movl	$0, -20(%rbp)
	jmp	.L31
.L32:
	movl	-24(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$4, %rax
	movq	%rax, %rdx
	movq	-64(%rbp), %rax
	leaq	(%rdx,%rax), %rbx
	movl	-20(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$4, %rax
	movq	%rax, %rdx
	movq	-56(%rbp), %rax
	addq	%rdx, %rax
	movq	%rax, %rsi
	movl	-24(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$4, %rax
	movq	%rax, %rdx
	movq	-48(%rbp), %rax
	addq	%rdx, %rax
	movq	%rax, %rcx
	movl	-36(%rbp), %eax
	movq	%rsi, %rdx
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	VectorMultiply
	movl	-20(%rbp), %edx
	movslq	%edx, %rdx
	movl	%eax, (%rbx,%rdx,4)
	addl	$1, -20(%rbp)
.L31:
	movl	-20(%rbp), %eax
	cmpl	-36(%rbp), %eax
	jl	.L32
	addl	$1, -24(%rbp)
.L30:
	movl	-24(%rbp), %eax
	cmpl	-36(%rbp), %eax
	jl	.L33
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	MultiplyMatrix, .-MultiplyMatrix
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
