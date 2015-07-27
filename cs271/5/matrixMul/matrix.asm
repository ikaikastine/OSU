; Name:
; Creation date: 
; Last modified: 
;
; 
; Name of file: printf1.asm
; Description: print an integer from storage and from a register
        
; Assemble: nasm -f elf -l template.lst  template.asm
; Link:     gcc -m32 -o template  template.o
; Run:      ./template
; Output:   a=5, eax=7

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
extern  printf          ; the C function, to be called
%define C esp+4
SECTION .data               ; Data section, initialized variables
    matrix dd 1, 2,\
              3, 4,

    matrix2 dd  5, 6, \
                7, 8,
    matrixLen:  dd 4
   
testEcx:    db "ECX = %d", 10, 0
testEdx:    db "EDX = %d", 10, 0
testEax:    db "EAX = %d", 10, 0
testEbx:    db "EBX = %d", 10, 0
arrayFmt:   db "%d ", 0
testMul:    db "The value after multiplying is = %d", 10, 0
resultFmt:  db "The value for the new array is = %d", 10, 0
intFmt:     db "%d ", 0
matrixFmt:  db "%d ", 0
newLine:    db " ", 10, 0
arrayLen:   dd 4

SECTION .bss                ; BSS, uninitialized variables
   val: resq 1
   val1: resd 1
   add1:    resd 1
   add2:    resd 1
   add3:    resd 1
   add4:    resd 1
   add5:    resd 1
   add6:    resd 1
   add7:    resd 1
   add8:    resd 1
   result1: resd 1
   result2: resd 1
   result3: resd 1
   result4: resd 1
SECTION .text               ; Code section.

global main             ; the standard gcc entry point

main:                   ; the program label for the entry point
        push    ebp         ; set up stack frame
        mov     ebp,esp

        .printMatrix1:
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
        ;calculate the first element of new matrix 
            mov eax, [matrix + esi]
            mov ebx, [matrix2 + esi]
        
            mul ebx
            mov [add1], eax
            add esi, 4
            ;pop eax 
            ;pop ebx 

            mov eax, [matrix + esi]
            add esi, 4
            mov ebx, [matrix2 + esi]

            mul ebx 
            mov [add2], eax 

            ;pop eax  
            mov eax, [add1]
            add eax, [add2]
            mov [result1], eax 

        ;calculate the second element of the new matrix
            xor esi, esi 
            mov eax, [matrix + esi]
            add esi, 4
            mov ebx, [matrix2 + esi]

            mul ebx 
            mov [add3], eax 
            ;pop eax 
            ;pop ebx 
            mov eax, [matrix + esi]
            add esi, 8
            mov ebx, [matrix2 + esi]
            mul ebx
            mov [add4], eax 
            ;pop eax 

            mov eax, [add3]
            add eax, [add4]
            mov [result2], eax 

        ;calculate the third element of the new matrix 
            xor esi, esi 
            mov ebx, [matrix2 + esi]
            add esi, 8
            mov eax, [matrix + esi]

            mul ebx 
            mov [add5], eax 
            ;pop eax 
            ;pop ebx 

            mov ebx, [matrix2 + esi]
            add esi, 4
            mov eax, [matrix + esi]

            mul ebx 
            mov [add6], eax 
            ;pop eax 
            mov eax, [add5]
            add eax, [add6]
            mov [result3], eax 

        ;calculate the fourth element of the new matrix 
            xor esi, esi 
            add esi, 4
            mov ebx, [matrix2 + esi]
        
            add esi, 4
            mov eax, [matrix + esi]

            mul ebx 
            mov [add7], eax

            ;pop eax 
            ;pop ebx 

            add esi, 4
            mov eax, [matrix + esi]
            mov ebx, [matrix2 + esi]
            
            mul ebx 
            mov [add8], eax 
            ;pop eax 

            mov eax, [add7]
            add eax, [add8]
            mov [result4], eax 

        .printNewMatrix:
            push dword [result1]
            push dword intFmt
            call printf 
            add esp, 8

            push dword [result2]
            push dword intFmt
            call printf 
            add esp, 8

            push dword newLine
            call printf 
            add esp, 4

            push dword [result3]
            push dword intFmt
            call printf 
            add esp, 8

            push dword [result4]
            push dword intFmt
            call printf 
            add esp, 8

            push dword newLine
            call printf 
            add esp, 4
            

        mov     esp, ebp    ; takedown stack frame
        pop     ebp         ; same as "leave" op

        mov     eax,0       ; normal, no error, return value
        ret                 ; return
        
