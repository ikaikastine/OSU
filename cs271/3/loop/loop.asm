	; Name: Kevin Stine
	; Creation date: 1/26/15
	; Last modified: 2/2/15
	;
	; 
	; Name of file: loop.asm
	; Description: print an integer from storage and from a register
		
	; Assemble:	nasm -f elf -l loop.lst  loop.asm
	; Link:		gcc -m32 -o loop  loop.o
	; Run:		./loop
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
SECTION .data				; Data section, initialized variables
	intFmt:		db "%d", 0
	newLine:	db " ", 10, 0
	terminate:	db "The program has successfully completed. Exiting now.", 10, 0
	int1:		dd 9
	int2:		dd 1
	valebx:		db "The value of ebx is %d", 10, 0
	valeax:		db "The value of eax is %d", 10, 0
	finish:		db "The program has completed its operation", 10, 0
SECTION .bss				; BSS, uninitialized variables
	num:		resd 1
SECTION .text				; Code section.

	global main				; the standard gcc entry point

	main:					; the program label for the entry point
		push	ebp			; set up stack frame
		mov		ebp,esp
	
		;Set ebx equal to 9 to begin the loop to count down
		mov ebx, 9
	
	;The loop block which goes through and decrements ebx 
	.loopBlock:
		push ebx
		push dword intFmt 
		call printf 
		add esp, 4

		dec ebx
		cmp ebx, 5
		jge .loopBlock

		;Print a newline after the numbers 
		push dword newLine 
		call printf 
		add esp, 4

		;Print out the termination message 
		push dword terminate 
		call printf 
		add esp, 4


		mov		esp, ebp	; takedown stack frame
		pop		ebp			; same as "leave" op

		mov		eax,0		; normal, no error, return value
		ret					; return
