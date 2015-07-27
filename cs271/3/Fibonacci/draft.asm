	; Name: Kevin Stine
	; Creation date: 1/26/15
	; Last modified: 9:00 pm 1/26/15
	;
	; 
	; Name of file: assignment3.asm
	; Description: 
		
	; Assemble:	nasm -f elf -l assignment3.lst  assignment3.asm
	; Link:		gcc -m32 -o assignment3  assignment3.o
	; Run:		./
	; Output:	

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
	title:		db "Program Title: assignment3.asm", 10, 0
	designer: 	db "Name: Kevin Stine", 10, 0
	prompt: 	db "Please enter your name", 10, 0
	greet:		db "Hello %s", 10, 0
	name_input:	db "%s", 0
	intPrompt:	db "Please enter an integer in the range [1-46]", 10, 0
	int_input:	db "%d", 0
	number: 	db "The number you entered: %d", 10, 0
	invalid:	db "The number you entered is not valid", 10, 0
	valid:		db "Your number is valid!", 10, 0
	goodbye:	db "Thank you %s", 10, 0
	formatStr:	db "%u", 0
	space5:		db "     ", 0
	newLine:	db " ", 10, 0
	num2:		dd 0
	num3:		dd 1
	num4:		dd 0
SECTION .bss				; BSS, uninitialized variables
	user_name:	resd 1
	user_int:	resd 1
	cols:		resd 1

SECTION .text				; Code section.

	global main				; the standard gcc entry point

	main:					; the program label for the entry point
		push	ebp			; set up stack frame
		mov		ebp,esp
		
	introduction:
		push dword designer	; print the designers Name
		call printf
		add esp, 4

		push dword title
		call printf
		add esp, 4

	user_instructions:
		push dword prompt
		call printf
		add esp, 4

		push dword user_name
		push dword name_input
		call scanf
		add esp, 8

		mov edx, user_name
		push edx
		push dword greet
		call printf
		add esp, 4

	get_user_data:
		.prompt:
			push dword intPrompt
			call printf
			add esp, 4

			push dword user_int
			push dword int_input
			call scanf
			add esp, 8

			mov eax, [user_int]
			push eax
			push dword number
			call printf
			add esp, 4

		.check:
			mov eax, [user_int]
			cmp eax, 1
			jl .prompt
			cmp eax, 46
			jg .prompt
			jmp .valid

		.valid:
			push dword valid
			call printf
			add esp, 4

	display_fibs:
		mov ebx, 0
		.loop:
			inc ebx
			; t2 = t1
		    mov eax, [num3]
		    mov [num4], eax
		 
		    ; t1 = t0
		    mov eax, [num2]
		    mov [num3], eax
		 
		    ; t0 = t1 + t2
		    mov eax, [num3]
		    add eax, [num4]
		    mov [num2], eax
		 
		    ; printf("%u\n", t0)    
		    push eax
		    push formatStr
		    call printf
		    add esp, 8

		    push dword space5
		    call printf
		    add esp, 4

		    cmp ebx, 5
		    je .newLine

		    mov eax, [user_int]
		    dec eax
		    mov [user_int], eax
		    cmp eax, 0
		    jg .loop
		 
		    ; n = n - 1; loop if n > 0
		.newLine:
			push dword newLine
			call printf
			add esp, 4   

		.loopBlock:
			mov eax, [user_int]
		    dec eax
		    mov [user_int], eax
		    cmp eax, 0
		    jg display_fibs
	 
	farewell:
		mov eax, user_name
		push eax
		push dword goodbye
		call printf
		add esp, 4  

		mov		esp, ebp	; takedown stack frame
		pop		ebp			; same as "leave" op

		mov		eax,0		; normal, no error, return value
		ret					; return
	
