	; Name: Kevin Stine 
	; Creation date: 1/26/15
	; Last modified: 2/2/15
	;
	; 
	; Name of file: int.asm
	; Description: print an integer from storage and from a register
		
	; Assemble:	nasm -f elf -l template.lst  template.asm
	; Link:		gcc -m32 -o template  template.o
	; Run:		./template
	; Output:	a=5, eax=7

	; Equivalent C code
	; /* printf1.c  print an int and an expression */
	; #include <stdio.h>
	; int main()
	; {
	;   int a=5;
	;   printf("a=%d, eax=%d\n", a, a+2);
	;   return 0;
	; }

	; Declare needed external functions
	;
	extern	printf			; the C function, to be called
	extern scanf
SECTION .data				; Data section, initialized variables
	title:			db "Program Title: assignment3.asm", 10, 0
	designer: 		db "Name: Kevin Stine", 10, 0
	prompt: 		db "Please enter your name", 10, 0
	greet:			db "Hello %s", 10, 0
	name_input:		db "%s", 0
	instructions:	db "You will be prompted to enter a number until you enter a negative number", 10, 0
	intPrompt:		db "Please enter a number less than or equal to 100", 10, 0
	intFmt:			db "%d", 0
	sum:			db "The sum of your numbers is: %d", 10, 0
	avg:			db "The rounded average is: %d", 10, 0
	goodbye:		db "Thank you %s. Have a nice day.", 10, 0
	error:			db "The number you entered was greater than 100", 10, 0
	total:			db "The total numbers entered were: %d", 10, 0
	eaxVal:			db "The value of eax is %d", 10, 0
	count:			dd 0
SECTION .bss				; BSS, uninitialized variables
	user_name:	resd 1
	user_int: 	resd 1
	sumInt:		resd 1
	avgInt:		resd 1
SECTION .text				; Code section.

	global main				; the standard gcc entry point

	main:					; the program label for the entry point
		push	ebp			; set up stack frame
		mov		ebp,esp
	
		;Print out the name of the designer 
		push dword designer
		call printf
		add esp, 4

		;Print out the title of the program 
		push dword title
		call printf 
		add esp, 4

		;Display the prompt to the user
		push dword prompt
		call printf
		add esp, 4

		;Prompt the user for their name 
		push dword user_name
		push dword name_input
		call scanf
		add esp, 8

		;Greet the user by name 
		mov edx, user_name
		push edx
		push dword greet
		call printf
		add esp, 4

		;Display the instruction set to the user 
		push dword instructions
		call printf 
		add esp, 4

		mov eax, 0
		 
	;Begin the process of calculating the numbers 	 
	calculate:
		mov ebx, 0
		input:
			push dword intPrompt
			call printf 
			add esp, 4

			push dword user_int
			push dword intFmt
			call scanf
			add esp, 8

			mov eax, [user_int]
			cmp eax, 100
			jg .falseLoop
			cmp eax, 0
			jl .finish
			jmp .calc
		
		;If the number entered is above 100
		.falseLoop:
			push dword error 
			call printf 
			add esp, 4
		
		;Calculate the sum and average 
		.calc: 
			mov [user_int], eax 
			mov eax, [sumInt] 
			add eax, [user_int]
			mov [sumInt], eax 

			;mov ebx, [count]
			inc ebx 

			jmp input

		;Once the loop has finished, print out the count, sum, and average 
		.finish: 
			;mov ebx, [count]
			push ebx 
			push dword total
			call printf 
			add esp, 4

			;sum 
			mov eax, [sumInt]
			push eax 
			push dword sum
			call printf
			add esp, 4 

			;avg 
			mov edx, 0
			mov eax, [sumInt]
			div ebx 
			push eax
			push dword avg
			call printf 
			add esp, 4 

			mov eax, user_name
			push eax
			push dword goodbye
			call printf
			add esp, 4  

		mov		esp, ebp	; takedown stack frame
		pop		ebp			; same as "leave" op

		mov		eax, 0		; normal, no error, return value
		ret					; return