###############################
# Srinidhi 13CS30034          #
# Mayank Roy 13CS30021        #
# Group Number - 55           #
# Date : 30/7/2015            #
###############################

	.data
input_number:	.asciiz	"Enter three positive integers s, m and n: "
MatA: .asciiz "Matrix A :\n"
MatB: .asciiz "Matrix B :\n"
MatC: .asciiz "Matrix C :\n"
new_line: .asciiz "\n"
Space: .asciiz " "

main:
		## Display prompt to input m,n
		la $a0, input_numbers
		li $v0, 4
		syscall
		
		li $v0, 5								#Enter s
		syscall
		move $s0, $v0
		
		li $v0, 5								#Enter b
		syscall
		move $s1, $v0
		
		## move current stack pointer to frame pointer
		move $fp, $sp
		
		#Calculate value of 2^b for m and n
		li $t0, 1
		sll $s2, $t0, $s1

		## Calculate the required values of n and store it in temporary registers
		mul $t0, $s2, $s2						#Calcutate m*n(Here $s2*$s2)
		li $t1, 2
		sll $t0, $t0, $t1						#Multiply by 4 for total required size for one matrix
		mul $t2, $t0, 3							#Total size required by three matrices
		move $s3, $t0							#Store the size required by one matrix in $s3		
		#subi $sp, $sp, $t2
		
		addi $sp, $sp, -32						#Allocate for registers we need to maintain
		sw $ra, 0($sp)							#Return address register
		sw $s0, 4($sp)							#Value of s
		sw $s1, 8($sp)							#Store address of $sp
		sw $s2, 12($sp)							#Store order of the matrix
		sw $s3, 16($sp)							#The size for one matrix
		
		sub $sp, $sp, $t0						#Allocate space for Multiplied Matrix C
		sw $sp, -12($fp)						#Address of Matrix C stored in the stack
		
		sub $sp, $sp, $t0						#Allocate space for Matrix B
		sw $sp, -8($fp)							#Address of Matrix B stored in the stack
		
		sub $sp, $sp, $t0						#Allocate space for Matrix A
		sw $sp, -4($fp)							#Address of Matrix A stored in the stack
		
		move $s1, $sp 							#Store the stack pointer address in $s1
		sw $s1, -24($fp)						#Store the value into the stack

		move $a0, $s0							#Set Parameters: s, n, A, B(in this order)
		move $a1, $s2
		lw $a2, -4($fp)
		lw $a3, -8($fp)

		jal matCreate							#Create the two matrices with seed value

		move $a0, $s2							#Set Parameters: n, A, B, C
		lw $a1, -4($fp)
		lw $a2, -8($fp)
		lw $a3, -12($fp)
		jal matAdd

		lw $a0, -20($fp)						#Set Parameters: n, (matrix starting address) (in this order)
		lw $a1, -4($fp)							#Mat A

		la $a0, MatA
		li $v0, 4
		syscall
		jal matPrint

		lw $a0, -20($fp)						#Set Parameters: n, (matrix starting address) (in this order)
		lw $a1, -8($fp)							#Mat B

		la $a0, MatB
		li $v0, 4
		syscall
		jal matPrint

		lw $a0, -20($fp)						#Set Parameters: n, (matrix starting address) (in this order)
		lw $a1, -12($fp)						#Mat C
		la $a0, MatB
		li $v0, 4
		syscall
		jal matPrint

		li $v0, 10
		syscall									#Exit


matAdd:
		sw $ra, -32($fp)

		move $t0, $a0							#Retrieve values of arguments from the argument registers
		move $t1, $a1
		move $t2, $a2
		move $t3, $a3
		move $sp, $a1							#move stack pointer to the start of matrix A	
		
		li $t4, 0								#counter i is initialized to 0
		Loop1_Add:								#External loop begins for Addition
		beq $t4,$t0,DoneAdding					#jump to label 'DoneCreate' when counter i is equals to number $t1 i.e n
		li $t5, 0								#counter j is initialized to 0
		InnerLoop_Add:								#inner loop begins
			beq $t5, $t0, Increase_by_1			#condition checks whether counter j is equal to n

			lw $t6, 0($sp)
			move $sp, $t2
			lw $t7, 0($sp)
			move $sp, $t3
			add $t7, $t7, $t6
			sw $t6, 0($sp)

			move $sp, $t1
			
			addi $sp, $sp, 4					#update stack pointer such that it points to next empty space/memory
			addi $t1, $t1, 4					#Update the pointers for Matrix A, B and C
			addi $t2, $t2, 4
			addi $t3, $t3, 4
			addi $t5, $t5, 1					#counter j is increased by 1
		j InnerLoop_Add							#jump back to label "InnerLoop_Add"
		Increase_by_1:
			addi $t4, $t4, 1					#counter i is increased by 1
			j Loop1_Add							#jump to label "Loop1_Add"
		
		DoneAdding:								#Finished adding
		lw $ra, -32($fp)
		jr $ra

		

		
matCreate:
		
		sw $ra, -32($fp)
		
		move $t0, $a0							#Retrieve values of arguments from the argument registers
		move $t1, $a1
		move $t2, $a2
		move $t4, $a3
		move $sp, $a2							#move stack pointer to the start of matrix A
	
		## value of a
		li $t3, 330
		
		## Value of m (of the number generator function)
		li $t5, 2303
				
		li $t6, 0								#counter i is initialized to 0
		move $t8, $t0							#Initialize $t8 to s (Xn[0][0])
		Loop1:									#External loop begins for Mat A
		beq $t6,$t1,DoneCreate					#jump to label 'DoneCreate' when counter i is equals to number $t1 i.e n
		li $t7, 0								#counter j is initialized to 0
		InnerLoop:								#inner loop begins
			beq $t7, $t1, Increase_i			#condition checks whether counter j is equal to n
			sw $t8, 0($sp)						#store $t8 i.e. Xn to stack pointer
			mul $t8, $t8, $t3
			addi $t8, $t8, 100
			rem $t8, $t8, $t5
			addi $sp, $sp, 4					#update stack pointer such that it points to next empty space/memory
			addi $t7, $t7, 1					#counter j is increased by 1
		j InnerLoop 							#jump back to label "InnerLoop"
		Increase_i:
			addi $t6, $t6, 1					#counter i is increased by 1
			j Loop1								#jump to label "Loop1"
		
		DoneCreate:								#Move to matrix B calculation

		move $sp, $a3
		li $t6, 0								#counter i is initialized to 0
		move $t8, $t0
		addi $t8, $t8, 10						#Initialize $t8 to s + 10  (Xn[0][0] for Mat B)
		Loop1_1:								#External loop begins
		beq $t6,$t1,DoneCreate_1				#jump to label 'DoneCreate' when counter i is equals to number $t1 i.e n
		li $t7, 0								#counter j is initialized to 0
		InnerLoop_1:							#inner loop begins
			beq $t7, $t1, Increase_i_1			#condition checks whether counter j is equal to n
			sw $t8, 0($sp)						#store $t8 i.e. Xn to stack pointer
			mul $t8, $t8, $t3
			addi $t8, $t8, 100
			div $t8, $t5
			mfhi $t8 
			addi $sp, $sp, 4					#update stack pointer such that it points to next empty space/memory
			addi $t7, $t7, 1					#counter j is increased by 1
		j InnerLoop_1 							#jump back to label "InnerLoop"
		Increase_i_1:
			addi $t6, $t6, 1					#counter i is increased by 1
			j Loop1_1 							#jump to label "Loop1"

		DoneCreate_1:
		lw $ra, -32($fp)
		jr $ra

matPrint:
		
		sw $ra, -32($fp)
		move $t0, $a0							#Retrieve values of arguments from the argument registers
		move $t1, $a1
		move $sp, $t1							#move stack pointer to the start of matrix A
	
		li $t2, 0								#counter i is initialized to 0
		LoopPrint:
			beq $t2,$t0,DonePrint				#jump to label 'DonePrint' when counter i equals to n
			li $t3, 0							#counter j is initialized to 0
			InnerLoopPrint:
				beq $t3, $t0, IncreasePrint		#jump to label 'IncreasePrint' when counter j equals to n
				li $v0, 1					
				lw   $a0, 0($sp)			
				syscall							#prints integer A[i][j] using syscall argument 1
				li $v0, 4 					
				la $a0, Space					
				syscall							#prints string " " using syscall arg 4
				add $t3, $t3, 1					#j is increased by 1
				add $sp, $sp, 4					#stack pointer increased to point at next number location
			j InnerLoopPrint					#jump to label 'InnerLoopPrint'
		IncreasePrint:
			add $t2, $t2, 1						#counter i is increased by 1
			li $v0, 4
			la $a0, new_line
			syscall								#prints string "\n" using syscall arg 4
		j LoopPrint								#jump to label 'LoopPrint'
		DonePrint:			
		lw $ra, -32($fp)
		jr $ra									#return
		
			
