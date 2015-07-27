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

	;data relevent to the array section 
	array: 		dd 1, 2, 3, 4, 5, 6, 7, 8, 9, 0
	arrayLen: 	dd 9  ; length of array 
	arrayFmt: 	db "%d ", 0 ; output format
	newArrayLen:	dd 18 ; length of new array 

	welcome: 	db "Please select from the following.", 10, 0
	prompt:		db "1 - reverse an array, 2 - rotate an array, 3 - frequency of a string, 4 - Sieve of Eratosthenes", 10, 0
	inputFmt:	db "%d", 0

	newline:	db " ", 10, 0
	segFault:	db "The code seg faults after this line", 10, 0
	frequencyBlock:		db "Welcome to the frequency block", 10, 0
	testEax:	db "The value of eax is = %d", 10, 0

	;data relevent to the frequency block section
	freqString:	db "Hello, my name is Kevin.", 0
	freqStringLen:	equ $-freqString-1

	freqInstructions: 	db "The following is your string: ", 0
	strFmt:		db "%s", 0 ;string format 
	charFmt:	db "%c: ", 0 ;character format 
	freqNum:	db "%d", 0

	primePrompt:	db "Please enter the value of n", 10, 0
	primeFmt:	db "%d", 0

	isNotPrime:	db "The value %d is not prime", 10, 0
	primeVal:	db "The value %d is prime", 10, 0
	primeCount:	db "There are %d prime numbers in this range", 10, 0

	;test prompts 
	testEcx:	db "The value of ECX = %d", 10, 0
	testEdx:	db "The value of EDX = %d", 10, 0
	testEbx:	db "The value of EBX = %d", 10, 0
	testEsi:	db "The value of ESI = %d", 10, 0
	testRemainder:	db "The remainder = %d", 10, 0
	testQuotient:	db "The quotient = %d", 10, 0

SECTION .bss 
	input: 		resd 1 
	newArray:	resd 1 
	primeInput:	resd 1
	remainder:	resd 1
	freqArray:	resd 128

SECTION .text               ; Code section.
	
	global main             ; the standard gcc entry point

	main:                   ; the program label for the entry point
	    push    ebp         ; set up stack frame
	    mov     ebp,esp

	    mov esi, 0      ; counter to increment set up for looping through array

	    push dword welcome
	    call printf 
	    add esp, 4

	    push dword prompt 
	    call printf 
	    add esp, 4

	    push dword input 
	    push dword inputFmt
	    call scanf 
	    add esp, 4

	    mov eax, [input]
	    cmp eax, 1
	    je .reverse
	    cmp eax, 2 
	    je .rotate
	    cmp eax, 3
	    je .frequency 
	    cmp eax, 4 
	    je .prime 
	    ;jmp .end

	.reverse:
		.init_setup:
			mov ecx, [arrayLen]
		.initial:
		    push ecx                                    
		    push dword [array + esi]                    
		    push dword arrayFmt                          
		    call printf                                 
		    add esp, 8                                 
		    pop ecx                                     

		    add esi, 4
		    loop .initial  

		    push dword newline
		    call printf 
		    add esp, 4 

		    push dword array 
		    push dword [arrayLen]
		    call reverseArray
		    add esp, 8
		    jmp .end

	.rotate:
		push dword array 
		push dword [arrayLen]
		call rotateArray
		add esp, 8
		jmp .end 

	.frequency:
		call freqBlock 		
		jmp .end

	.prime:
		push dword primePrompt
		call printf 
		add esp, 4

		push dword primeInput
		push dword primeFmt
		call scanf 
		add esp, 8

		push dword [primeInput]
		call primeCalc
		add esp, 4
		jmp .end

	.end:
		push dword newline
		call printf 
		add esp, 4 

		mov     esp, ebp    ; takedown stack frame
	    pop     ebp         ; same as "leave" op

	    mov     eax, 0       ; normal, no error, return value
	    ret                 ; return

	reverseArray:
		push ebp                    ; setup stack
	    mov ebp, esp 
	    sub esp, 0x40                ; 64 bytes of local stack space 

	    ; put parameters into registers
	    mov ebx, [ebp+12]           ; array
	    mov edx, [ebp+8]            ; arrayLen
			
		mov esi, [ebp+12]
		mov edi, [ebp+12]
		mov eax, [ebp+8]

		push eax 
		sub eax, 1
		mov ebx, 4
		mul ebx 
		add edi, eax 
		mov ebx, 2 
		mov eax, [ebp+8]

		push dword [esi]		
		.reverse_loop:
			;push dword [esi]
			push dword [edi]

			push dword arrayFmt
			call printf 
			add esp, 4
			;pop dword [esi]
			pop dword [edi]
			;add esi, 4
			sub edi, 4 
			cmp esi, edi
			jne .reverse_loop
			pop dword [esi]
			push dword [array] 
		    push dword arrayFmt 
		    call printf 
		    add esp, 4
			jmp .exit
	
		.exit:
			mov esp, ebp             ; undo "sub esp,0x40" above 
	        pop ebp
	        mov eax, ebx                ; return the reversed array
	        ret 

	rotateArray:
		push ebp                    ; setup stack
	    mov ebp, esp 
	    sub esp, 0x40                ; 64 bytes of local stack space 

	    mov ebx, [ebp+12]
		mov ecx, [ebp+8]
		ror ebx, 1
		add esi, 4
		sub ecx, 1

		.printNewArray:
		    push ecx                                    
		    push dword [array + esi]                    
		    push dword arrayFmt                          
		    call printf                                 
		    add esp, 8                                 
		    pop ecx                                     

		    add esi, 4
		    loop .printNewArray 

		    push dword [array] 
		    push dword arrayFmt 
		    call printf 
		    add esp, 4

	    mov esp, ebp 
	    pop ebp
	    mov eax, ebx 
	    ret 


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

	primeCalc:
		push ebp                    ; setup stack
	    mov ebp, esp 
	    sub esp, 0x40 

		mov ecx, 0
		.loop:
			
			mov ebx, 2     ; finds the remainder after dividing the two variables
			mov eax, [primeInput]
			cdq
			div ebx
			mov [remainder], edx

			mov ebx, [remainder]
			cmp ebx, 0 
			je .checkPrime
			
			cmp ebx, 0 
			jne .checkPrime

		.notPrime:
			mov eax, [primeInput]
			push eax
			push dword isNotPrime
			call printf 
			add esp, 4
			jmp .endLoop

		.checkPrime:
			cmp ebx, 0
			je .notPrime
			mov eax, [primeInput]
			cmp eax, 3
			je .isPrime

			mov ebx, 3
			mov eax, [primeInput]
			cdq 
			div ebx 
			mov [remainder], edx 
			
			mov ebx, [remainder]
			cmp ebx, 0
			je .notPrime 
			cmp ebx, 0
			jne .isPrime
			jmp .endLoop

		.isPrime:
			mov eax, [primeInput]
			push eax
			push dword primeVal
			call printf 
			add esp, 4
			jmp .endLoop

		.endLoop:
			mov esp, ebp
			pop ebp
			mov eax, ebx
			ret 

	.end: 
		push dword newline 
		call printf 
		add esp, 4

	    mov     esp, ebp    ; takedown stack frame
	    pop     ebp         ; same as "leave" op

	    mov     eax, 0       ; normal, no error, return value
	    ret                 ; return
