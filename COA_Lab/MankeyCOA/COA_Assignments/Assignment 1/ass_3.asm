###############################
# Srinidhi 13CS30034          #
# Mayank Roy 13CS30021        #
# Group Number - 55           #
# Date : 30/7/2015            #
###############################

	.data
input_number:	.asciiz	"Enter three positive integers s, m and n: "
space_:		.asciiz "  "
newline_:	.asciiz "\n"

	.text
main:
		## Display prompt to input m,n,s
		la $a0, input_number
		li $v0, 4
		syscall
		
		li $v0, 5
		syscall
		move $s0, $v0
		
		li $v0, 5
		syscall
		move $s1, $v0
		
		li $v0, 5
		syscall
		move $s2, $v0

		move $fp, $sp
		
		## Allocate required amount of bytes for Matrices A, B and the resultant sum
		mul $t0, $s0, $s1
		li $t1, 2
		sll $t0, $t0, $t1
		
		sub $sp, $sp, 4
		sw $t0, 0($sp)
		
		#mul $t2, $t0, 3
		#sub $sp, $sp, $t2
		
		sub $sp, $sp, $t0
		move $a0, $sp
				
		sub $sp, $sp, $t0
		move $a1, $sp
		
		move $a2, $s1
		move $a3, $s2

		addi $sp, $sp, -12
		sw $s0, 0($sp)
		sw $s1, 4($sp)
		sw $s2, 8($sp)
		
		jal matCreate
		
	
		move $a0, $sp
		
		sub $fp, $fp, 4
		move $a1, $fp
		addi $fp, $fp, 4
		
		sub $sp, $sp, 4
		move $a1, $sp
		addi $sp, $sp, 4
		
		sub $sp, $sp, 8
		move $a1, $sp
		addi $sp, $sp, 8

		jal matPrint
		
		
matCreate:
		
		addi $sp, $sp, -8
		sw $ra, 0($sp)
		sw $fp, 4($sp)
		
		move $fp, $sp
		
		move $sp, $a0						# Move sp to the start of matrix A
		
		## Retrieve values of s, m and n in t0, t1 and t2
		lw $t0, 8($fp)						# Value of s/ Value of X(n-1)
		move $t1, $a2						# Value of m
		move $t2, $a3						# Value of n
		
		move $t5, $a0
		move $t6, $a1
		
		## value of a
		li $t3, 7
		mul $t3, $t3, 47
		addi $t3, $t3, 1
		
		## Value of m (of the number generator function)
		li $t4, 48
		mul $t4, $t4, 48
		sub $t4, $t4, 1
		
		## t7 stores value of A[i][j]
		
		loop_1:
			mul $t7, $t7, $t0
			add $t7, $t7, 100
			
			div $t7, $t4
			mfhi $t7
			
			sw $t7, 0($sp)
			move $t0, $t7

			beq $t1, 0, endloop_1
			
			sub $t1, $t1, 1
			addi $sp, $sp, 4
			b loop_1
			
		endloop_1:
			beq $t2, 0, end_fillMatrix							# Matrix has been filled (m=0, n=0)
			addi $sp, $sp, 4
			sub $t2, $t2, 1
			lw $t1, 12($fp)								#Load original value of m
			
			b loop_1										# Go back to loop
			
		end_fillMatrix_1:
			lw $t1, 12($fp)
			lw $t2, 16($fp)
			lw $t0, 8($fp)
			move $sp, $a1
			addi $t0, $t0, 10
			b loop_2
			
		loop_2:
			mul $t7, $t7, $t0
			add $t7, $t7, 100
			
			div $t7, $t4
			mfhi $t7
			
			sw $t7, 0($sp)
			move $t0, $t7
						
			beq $t1, 0, endloop_2
			
			sub $t1, $t1, 1
			addi $sp, $sp, 4
			b loop_2

			
		endloop_2:
			beq $t2, 0, end_fillMatrix_2							# Matrix has been filled (m=0, n=0)
			addi $sp, $sp, 4
			sub $t2, $t2, 1
			lw $t1, 8($fp)										#Load original value of m
			
			b loop_2												# Go back to loop
			
		end_fillMatrix_2:
			lw $ra, 0($fp)
			move $sp, $fp
			lw $fp, 4($sp)
			sub $sp, $sp, 8
			jr $ra
	
			
			
matPrint:
		
		addi $sp, $sp, -8
		sw $ra, 0($sp)
		sw $fp, 4($sp)
		
		move $fp, $sp
		
		move $sp, $a0						# Move sp to the start of matrix A
		
		## Retrieve values of s, m and n in t0, t1 and t2
		lw $t0, 8($fp)						# Value of s/ Value of X(n-1)
		move $t1, $a2						# Value of m
		move $t2, $a3						# Value of n
		
		move $t5, $a0
		move $t6, $a1
		
		
		printLoop_1:
			
			lw $a0, 0($sp)
			li $v0, 1
			syscall
			
			la $a0, space_
			li $v0, 4
			syscall
			
			beq $t1, 0, endprintloop_1	
			sub $t1, $t1, 1
			addi $sp, $sp, 4
			b printLoop_1

		endprintloop_1:
		
			la $a0, newline_
			li $v0, 4
			syscall
			
			beq $t2, 0, end_printMatrix_1							# Matrix 1 has been printed (m=0, n=0)
			addi $sp, $sp, 4
			sub $t2, $t2, 1
			lw $t1, 12($fp)											#Load original value of m
			
			b printLoop_1												# Go back to loop
			
		end_printMatrix_1:
			lw $t1, 12($fp)
			lw $t2, 16($fp)
			lw $t0, 8($fp)
			move $sp, $a1
			addi $t0, $t0, 10
			b printLoop_2
			
		printLoop_2:
			lw $a0, 0($sp)
			li $v0, 1
			syscall
			
			la $a0, space_
			li $v0, 4
			syscall
			
			beq $t1, 0, endprintloop_2
			sub $t1, $t1, 1
			addi $sp, $sp, 4
			b printLoop_2
			
		endprintloop_2:
		
			la $a0, newline_
			li $v0, 4
			syscall

			beq $t2, 0, end_printMatrix_2							# Matrix has been filled (m=0, n=0)
			addi $sp, $sp, 4
			sub $t2, $t2, 1
			lw $t1, 8($fp)											#Load original value of m
			
			b loop_2													# Go back to loop
			
		end_printMatrix_2:
			lw $ra, 0($fp)
			move $sp, $fp
			lw $fp, 4($sp)
			sub $sp, $sp, 8
			jr $ra		
			
			
			
			
			
			
			
			
			
	