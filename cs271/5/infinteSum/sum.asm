	;Name: Kevin Stine
	;Creation Date: 
	;Last Modified:
	;
	;
	;Name of file: sum.asm
	;Description: calculate the value of e using an infinte sum
	;
	;Assemble: nasm -f elf -l sum.lst sum.asm 
	;Link:	gcc -m32 -0 sum sum.o
	;run: ./sum
	


	extern printf
	extern scanf

SECTION .data
	inputx db "Please enter a value for x in the equation e^x ",10
	linputx equ $-inputx
	inputn db "Please enter a value for n (number of terms up to 34) ",10
	linputn equ $-inputn
	scanfFmt db "%lf",0
	scanfint db "%d",0
	printFmt db "The value of e = %.7f",10,0

SECTION .bss
	data resq 1
	fact resd 1
	x resq 1
	poweredx resq 1
	n resd 1
	temp resw 1
	sum resq 1
	one resd 1
	garbage resb 1

SECTION .text
 
	global main
	

	call infinite
	call end

	infinite:
 
		
		 

		print:
		mov eax,4
		mov ebx,1
		int 0x80
		ret
		 
		printfloat:
		push ebp
		mov ebp,esp
		 
		push dword[data+4]
		push dword[data]
		 
		push printFmt
		call printf
		
		mov esp,ebp
		pop ebp
		ret
		 
		 
		readfloat:
		push ebp
		mov ebp,esp
		 
		push data
		push scanfFmt
		call scanf
		 
		mov esp,ebp
		pop ebp
		ret
		 
		main:
		mov ecx,inputn
		mov edx,linputn
		call print
		 
		 
		push n
		push scanfint
		call scanf
		 
		sub dword[n],1
		 
		mov ecx,inputx
		mov edx,linputx
		call print
		 
		call readfloat
		fld qword[data]
		 
		fstp qword[x]
		mov eax,dword[n]
		 
		cmp eax,0
		je done
		 
		looping:
		 
		fld qword[x]
		cmp eax,1
		jle adding
		 
		mov ebx,eax
		 
		powering:
		fmul qword[x]
		dec ebx
		cmp ebx,1
		jnle powering
		fstp qword[poweredx]
		 
		mov ebx,eax
		mov eax,1
		factorial:
		imul ebx
		dec ebx
		cmp ebx,1
		jnle factorial
		 
		mov dword[fact],eax
		 
		fld qword[poweredx]
		fidiv dword[fact]
		 
		adding:
		fadd qword[sum]
		fstp qword[sum]
		 
		 
		 
		mov eax,dword[n]
		sub eax,1
		mov dword[n],eax
		cmp eax,0
		jnle looping
		 
		done:
		 
		fld qword[sum]
		mov dword[one], 1
		fiadd dword[one]
		fstp qword[data]
		 
		 
		call printfloat
		 
		exit:
		mov eax,1
		mov ebx,0
		int 0x80
		 
	end:
		mov		esp, ebp	; takedown stack frame
		pop		ebp			; same as "leave" op

		mov		eax,0		; normal, no error, return value
		ret					; return
