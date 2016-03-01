# Srinidhi 13CS30034
# Mayank Roy 13CS30021
# Group Number : 63
# Date : 23/7/2015
#
#	$t0	-	Used to hold the input number
#	$t1	-	Used to hold the sum of factors of integer in $t0
#	$t2	-	Used to store loop variable
#	$t3	-	Used to store $t0/2, as condition variable to end loop
#	$v0	-	syscall parameter and return value.
#	$a0	-	syscall parameter.



		.text						#	text directive
main:								#	main begins
		## Display the prompt to input number
		la $a0, enter_string		#	Load the address of string enter_string in $a0
		li $v0, 4					#	Load syscall print_string to $v0
		syscall						#	Make the syscall
		
		## Read the input from the user
		li $v0, 5					#	Load syscall read_int to $v0
		syscall						#	Make the syscall
		move $t0, $v0				#	Move the input number to $t0
		
		## Set value of loop variables
		li $t1, 1					#	Load 1 into $t1
		li $t2, 2					#	Load 2 into $t2
		li $a0, 2					#	Load value 2 into $a0
		div $t0, $a0				#	Divide $t0 (Input number) by half for the loop termination condition
		mflo $t3					#	Move the quotient (stored in LO) to $t3
		
loop:								#	Loop begins
		## Divide $t0 by current loop variable and check remainder
		div $t0, $t2				#	Divide $t0 by current value of the loop variable ($t2)
		mfhi $a0					#	Move remainder (stored in HI) to $a0
		beq $a0, 0, is_factor		#	Check if remainder is 0, if yes, go to label is_factor
		beq $t2, $t3, exit_label	#	Check if current value of loop variable ($t2) is equal
									#	to $t3 (termination condition). If yes, go to label
									#	exit_label
		add $t2, $t2, 1				#	Increment loop variable $t2 by 1
		b loop						#	Re-enter loop (go to label loop)
		
is_factor:
		## If current value of loop variable is factor of $t0,
		## add the value to $t1 (holds the sum of factors upto current loop variable value)
		add $t1, $t1, $t2			#	Add $t2 to $t1 and store it in $t1
		beq $t2, $t3, exit_label	#	Check if current value of loop variable ($t2) is equal
									#	to $t3 (termination condition). If yes, go to label
									#	exit_label
		add $t2, $t2, 1				#	Increment loop variable $t2 by 1
		b loop						#	Re-enter loop
		
exit_label:
		## If number is perfect number, print 'Yes' message, else a 'No' message and exit
		beq $t0, $t1, yes_msg		#	If sum of factors ($t1) equals number itself, go to label yes_msg
		
		## No message
		la $a0, result_msg			#	Load address of result_msg in $a0 
		li $v0, 4					#	Load syscall print_string in $v0
		syscall						#	Make the syscall
		
		move $a0, $t0				#	Move the value of input integer into $a0
		li $v0, 1					#	Load syscall print_int in $v0
		syscall						#	Make the syscall
		
		la $a0, nope				#	Load address of nope in $a0 
		li $v0, 4					#	Load syscall print_string in $v0
		syscall						#	Make the syscall
		
		li $v0,10					#	Load syscall exit in $v0
		syscall						#	Make the syscall
		
		## exit ass_1.asm
		
yes_msg:
		## Print 'Yes' message and exit
		la $a0, result_msg			#	Load address of result_msg in $a0
		li $v0, 4					#	Load syscall print_string in $v0
		syscall						#	Make the syscall
		
		move $a0, $t0				#	Move the value of input integer into $a0
		li $v0, 1					#	Load syscall print_int in $v0
		syscall						#	Make the syscall
		
		la $a0, yes					#	Load address of yes in $a0 
		li $v0, 4					#	Load syscall print_string in $v0
		syscall						#	Make the syscall

		li $v0,10					#	Load syscall exit in $v0
		syscall						#	Make the syscall
		
		## exit ass_1.asm
		
		.data						# data directive (values stored in the strings)
enter_string:		.asciiz "Enter a positive integer: "		# Enter the number prompt
result_msg:			.asciiz "The number "						# Final display message on the
yes:				.asciiz " is a perfect number."				# console according to 'Perfect Number'
nope:				.asciiz " is not a perfect number."			# condition satisfaction