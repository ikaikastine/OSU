	extern printf			; the C function, to be called
	extern scanf			; C input function

SECTION .data				; Data section, initialized variables
	name: 	db "Name: Kevin Stine", 10, 0
	hw:		db "Assignment 2", 10, 0
	fmt:    db "Got %d and %d as input!", 10, 0 ; The printf format, "\n",'0'
	input:	db "%d %d",0			 ; the scanf format
	prompt:	db "Please enter two numbers seperated by a space", 10, 0
	addfmt: db "The sum of int1 + int2 = %d", 10, 0
	subfmt: db "The difference of int1 - int2 = %d", 10, 0
	mulfmt: db "The product of int1 * int2 = %d", 10, 0
	divfmt: db "The quotient of int1 / int2 = %d", 10, 0
	remfmt: db "The remainder of int1 / int2 = %d", 10, 0

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

		push dword hw		; print assignment
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
		;mul [int1] 				;eax = eax * [int1]
		mov ebx, [int1]
		div ebx

		
		
		push dword [int2]	
		push dword [int1]
		push dword fmt
		call printf			; prinf out the values of the two variables
		add esp, 12

		mov eax, [int2]		; function which adds the two variables
		mov ebx, [int1]
		add eax, ebx
		push eax
		push dword addfmt
		call printf
		add esp, 4

		mov eax, [int2]		; function which subtracts the two variables
		mov ebx, [int1]
		sub ebx, eax
		push eax
		push dword subfmt
		call printf
		add esp, 4

		mov eax, [int2]		; function which multiplys the two variables
		mov ebx, [int1]
		mul ebx
		push eax
		push dword mulfmt
		call printf
		add esp, 4

		mov ebx, [int2]
		mov eax, [int1]
		cdq
		div ebx
		mov [quotient], eax
		push eax
		push dword divfmt
		call printf
		add esp, 4

		mov ebx, [int2]
		mov eax, [int1]
		cdq
		div ebx
		mov [remainder], edx
		push edx
		push dword remfmt
		call printf
		add esp, 4
		
		mov esp, ebp	; takedown stack frame
		pop ebp			; same as "leave" op

		mov eax,0		; normal, no error, return value
		ret					; return
	