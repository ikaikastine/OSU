		; Name: Kevin Stine
		; Creation date: 20 January 2015
		; Last modified: 13:28 23 January 2015
		;
		; 
		; Name of file: assignment2.asm
		; Description: First assembly assignment, with printf/scanf and arithmetic
			
		; Assemble:	nasm -f elf -l assignment2.lst  assignment2.asm
		; Link:		gcc -o assignment2  assignment2.o
		; Run:		assignment2
		; Output:	Name, assignment, sum, difference, product, quotient, remainder, termination message.

		; Equivalent C code
		; /* printf1.c  print an int and an expression */
		; #include <stdio.h>
		; int main()
		; {
		;	int int1, int2, int3;
		;   printf("Name: Kevin Stine\n");
		;	printf("Assignment2\n");
		;	printf("Please enter two numbers seperated by a space\n");
		;	scanf("%d %d", int1, int2);
		; 	
		;	int3 = int1 + int2;
		; 	printf("The sum of int1 + int2 = %d\n");
		;	int3 = int1 - int2;
		;	printf("The difference of int1 - int2 = %d\n");
		;	int3 = int1 * int2;
		;	printf("The product of int1 * int2 = %d\n");
		; 	int3 = int1 / int2;
		;	printf("The quotient of int1 / int2 = %d\n");
		;	int 3 = int1 % int2;
		;	printf("The remainder of int1 / int2 = %d\n");
		;	printf("Program execution complete. Exiting now.\n");
		;
		;   return 0;
		; }

		; Declare needed external functions
		;
	extern printf			; the C function, to be called
	extern scanf			; C input function

SECTION .data				; Data section, initialized variables
	name: 	db "Name: Kevin Stine", 10, 0
	hw:		db "Program Title: Assignment 2", 10, 0
	input:	db "%d %d",0			 ; format for scanf
	prompt:	db "Please enter two numbers seperated by a space", 10, 0
	addfmt: db "The sum of int1 + int2 = %d", 10, 0
	subfmt: db "The difference of int1 - int2 = %d", 10, 0
	mulfmt: db "The product of int1 * int2 = %d", 10, 0
	divfmt: db "The quotient of int1 / int2 = %d", 10, 0
	remfmt: db "The remainder of int1 / int2 = %d", 10, 0
	end:	db "Program execution complete. Exiting now.", 10, 0

SECTION .bss				; BSS, uninitialized variables
	int1:	resd 1
	int2:	resd 1
	int3:	resd 1
	quotient: resd 1
	remainder: resd 1
		
SECTION .text				; Code section.

	global main				; the standard gcc entry point

	main:					; the program label for the entry point
		push ebp			; set up stack frame
		mov ebp,esp

		push dword name		; print name
		call printf
		add esp, 4

		push dword hw		; print project name
		call printf
		add esp, 4

		push dword prompt	; print prompt for variables
		call printf
		add esp, 4

		push dword int2		; variable 2
		push dword int1		; variable 1
		push dword input	; input format
		call scanf			; take two variables as an input
		add esp, 12


		mov eax, [int2]
		cdq
		mov ebx, [int1]
		div ebx

		mov eax, [int2]		; adds the two variables
		mov ebx, [int1]
		add eax, ebx
		push eax
		push dword addfmt
		call printf
		add esp, 4

		mov eax, [int2]		; subtracts the two variables
		mov ebx, [int1]
		sub ebx, eax
		push ebx
		push dword subfmt
		call printf
		add esp, 4

		mov eax, [int2]		; multiplys the two variables
		mov ebx, [int1]
		mul ebx
		push eax
		push dword mulfmt
		call printf
		add esp, 4

		mov ebx, [int2]		; divides the two variables 
		mov eax, [int1]
		cdq
		div ebx
		mov [quotient], eax
		push eax
		push dword divfmt
		call printf
		add esp, 4

		mov ebx, [int2]		; finds the remainder after dividing the two variables
		mov eax, [int1]
		cdq
		div ebx
		mov [remainder], edx
		push edx
		push dword remfmt
		call printf
		add esp, 4

		push dword end		; prints the termination message
		call printf
		add esp, 4
		
		mov esp, ebp	; takedown stack frame
		pop ebp			; same as "leave" op

		mov eax,0		; normal, no error, return value
		ret					; return
	
