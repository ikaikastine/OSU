	; Name: Kevin Stine
	; Creation date: 2/8/15
	; Last modified: 2/10/15
	;
	; 
	; Name of file: array.asm
	; Description: print an integer from storage and from a register
		
	; Assemble:	nasm -f elf -l array.lst  array.asm
	; Link:		gcc -m32 -o array  array.o
	; Run:		./array
	; Output:	a=5, eax=7

	; Equivalent C code
	; /* array.c  print an int and an expression */
	; #include <stdio.h>
	; int main()
	; {
	;   int a=5;
	;   printf("a=%d, eax=%d\n", a, a+2);
	;   return 0;
	; }

	; Declare needed external functions
	;
	extern printf  
	extern scanf

SECTION .data              ; Data section, initialized variables

	;data relevent to the frequency block section
	freqString:	db "Hello, my name is Kevin.", 0
	freqStringLen:	equ $-freqString-1

	freqInstructions: 	db "The following is your string: ", 0
	strFmt:		db "%s", 0 ;string format 
	charFmt:	db "%c: ", 0 ;character format 
	freqNum:	db "%d", 0
	relFreq:	db "%f", 0
	newline:	db " ", 10, 0
	dot:		db ".", 0
	intFmt:		db "%d", 0
	strLen:		db 24

SECTION .bss 
	input: 		resd 1 
	newArray:	resd 1 
	primeInput:	resd 1
	remainder:	resd 1
	freqArray:	resd 128
	remFreq:	resq 1

SECTION .text               ; Code section.
	
	global main             ; the standard gcc entry point

	main:                   ; the program label for the entry point
	    push    ebp         ; set up stack frame
	    mov     ebp,esp

	    mov esi, 0      ; counter to increment set up for looping through array

	 
		freqBlock:
		mov esi, freqString
		mov edi, 0
		mov ebx, freqArray
		mov ecx, freqStringLen
		.initLoop:
		    xor eax, eax
		    mov al, [esi]
		    add edi, eax
		    mov ebx, 1
		    add [freqArray+4*edi], ebx

		    mov edi, 0
		    add esi, 1
		    loop .initLoop

		    push dword freqString
		    push dword strFmt
		    call printf
		    add esp, 8

		    push dword newline
		    call printf
		    add esp, 4
   
		    mov ebx, freqArray
		    mov ecx, 128                            
		    mov esi, 0                              
		.finalLoop:
		    mov eax, 0
		    cmp [ebx+esi], eax
		    je .skip
		    mov eax, esi
		    push ebx
		    push ecx
		    mov ebx, 4
		    cdq
		    div ebx
		    push eax
		    push dword charFmt
		    call printf
		    add esp, 8
		    pop ecx
		    pop ebx

		    push ebx
		    push ecx                                    
		    push dword [ebx + esi]     ;push value of array onto stack                                    
		    push dword freqNum
		    call printf                                 
		    add esp, 8                                 
		    pop ecx                                    
		    pop ebx

		    push ebx
		    push ecx
		    push dword newline
		    call printf
		    add esp, 4
		    pop ecx
		    pop ebx

		.skip:
		    add esi, 4
		    loop .finalLoop
		.end:
		    mov esp, ebp
			pop ebp
			mov eax, ebx
			ret 

	


		push dword newline 
		call printf 
		add esp, 4

	    mov     esp, ebp    ; takedown stack frame
	    pop     ebp         ; same as "leave" op

	    mov     eax, 0       ; normal, no error, return value
	    ret                 ; return
