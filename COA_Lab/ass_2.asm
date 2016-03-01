#####################################################################
#Srinidhi 13CS30034													#
#Mayank 13CS30021													#
#Group 55															#
#24/7/15															#
#####################################################################
#Registers Used:													#
# $t0: Store size of the array										#
# $t2: Store current iteration number								#
# $t3: Store value of current element in the iteration				#
# $t4: Store max element of array									#
# $t5: Store second largest element of array (Problem Statement)	#
# $a0: Register used as string data storage for syscalls			#
# $v0: Register used as parameter for syscalls						#
# $sp: Stack Pointer to set the lower bound of the used memory		#
# $fp: Frame Pointer for the Stack 									#
# $s0: Used to store the address in $ra 							#
# $s1: Used to store the address in $ra 							#
# $s2: Used to store the address in $ra 							#
# $s3: Used to store the address of $sp 							#
# $ra: Return Address pointer stored in this Register 				#
#####################################################################

		.data
prompt_size:	.asciiz "Enter the count of elements to be read: "
prompt_num:		.asciiz "\nEnter the next element: "
second_max:		.asciiz "\nSecond Largest number: "

		.text
#		.globl main
main:
		addi $sp, $sp, -408				#Allocate stack pointer for maximum 101 integers
		addiu $fp, $sp, 408				#Set frame pointer to top of stack
		move $s3, $sp

		sw $ra, 0($sp)					#Set ra to the stack storage
		sw $t0, 4($sp)					#Set t0 to the memory address used to store size

		la $a0, prompt_size				#Prompt code for size entering
		li $v0, 4
		syscall

		li $v0, 5						#Enter Size
		syscall
		move $t0, $v0

		addi $sp, $sp, 8

		jal cin							#Enter the elements of the array

		move $sp, $s3					#Move the stack pointer to original( $fp - 408)
		addi $sp, $sp, 8				#Move stack pointer to first element of the array

		jal find_second_max				#Jump to code for finding second largest element

		la $a0, second_max 				#Print the second largest element stored in $t5
		li $v0, 4
		syscall

		move $a0, $t5					#Print the int, 1 is the system code in $v0 for the syscall
		li $v0, 1
		syscall

		move $sp, $s3					#Popping all the memory allocated on the stack
		lw $t0, 4($sp)
		lw $ra, 0($sp)
		addi $sp, $sp, 408

		li $v0, 10						#Code end without errors
		syscall

cin:									#Enter elements of the array from the console
		move $s0, $ra 					#Move value of $ra to stored register $s0
		li $t2, 0						#Set loop variable $t2 to 0(initial)
		
		#do{Enter element;}
		#while( $t2++ != $t0 )
		#Jump to address in $ra after termination
	
	loop:

		la $a0, prompt_num				#Prompt for next number
		li $v0, 4
		syscall

		li $v0, 5
		syscall

		move $t3, $v0

		sw $t3, 0($sp)					#Save value in temporary register $t3 to stack

		addi $t2, $t2, 1				#Increment loop counter
		addi $sp, $sp, 4				#Add 4 byte after every iteration

		bne $t2, $t0, loop 				#Loop termination check 
		move $ra, $s0
		#lw $t3, 0($sp)
		jr $ra

find_second_max:						#Find Second Max element
		move $s0, $ra 					#save current return address in $s0
		lw $t4, 0($sp)					#Let first array element be $t4, max
		li $t5, -255					#Set $t5 to assumed low value
		li $t2, 1						#Loop variable $t2 set
		lw $t3, 4($sp)					#Store value in index 1 of the array in $t3

		addi $sp, $sp, 4 				#Increment the temporary register to the next array element
	
	loop1:

		bgt $t3, $t4, if_gt_max			#If element in this location is greater than previous max, update max & second max
		bgt $t3, $t5, elif_gtsecond_max	#If element in this location is greater than 2nd Max but less than max

		addi $t2, $t2, 1				#Update the iteration number
		addi $sp, $sp, 4				#Increment the temporary register to the next array element
		lw $t3, 0($sp)					#Load new word into $t3

		bne $t2, $t0, loop1				#If $t2 != $t0, continue in the loop
		move $ra, $s0					#Get the return address in $ra and jump back
		jr $ra

	if_gt_max:

		move $s1, $ra 					
		move $t5, $t4					#If new element is greater than current max, then 2nd max = max; max = new element
		move $t4, $t3
		
		addi $t2, $t2, 1
		addi $sp, $sp, 4
		lw $t3, 0($sp)

		bne $t2, $t0, loop1
		move $ra, $s1					#Get current return address in $ra and jump back
		jr $ra

	elif_gtsecond_max:

		move $s2, $ra
		move $t5, $t3					#Else if, new element is greater than 2nd max but less than max, 2nd max = element
				
		addi $t2, $t2, 1
		addi $sp, $sp, 4
		lw $t3, 0($sp)
		
		bne $t2, $t0, loop1
		move $ra, $s2					#Get current return address in $ra and jump back
		jr $ra