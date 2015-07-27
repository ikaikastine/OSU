   extern printf  
   extern scanf

SECTION .data              ; Data section, initialized variables
   numPrompt:  db "Please enter a value for n", 10, 0
   numFmt:     db "%d,", 0
   testQuotient:  db "The quotient is = %d", 10, 0
   testRemainder: db "The remainder is = %d", 10, 0
   zRem: db "The remainder is zero", 10, 0
   nzRem: db "The remainder is not zero", 10, 0

SECTION .bss 
   primeInput: resd 1
   remainder:  resd 1
SECTION .text

global main             ; the standard gcc entry point

   main:                   ; the program label for the entry point
       push    ebp         ; set up stack frame
       mov     ebp, esp

       push dword numPrompt
       call printf 
       add esp, 4

       push dword primeInput
       push dword numFmt
       call scanf
       add esp, 8

       ;mov eax, [primeInput]
       ;mov ebx, 2

      mov ebx, 2     ; finds the remainder after dividing the two variables
      mov eax, [primeInput]
      cdq
      div ebx
      mov [remainder], edx
      push edx
      push dword testRemainder
      call printf
      add esp, 4
      mov ebx, [remainder]

      cmp ebx, 0
      je .remZero

      push ebx 
      push dword testRemainder
      call printf 
      add esp, 4 

      cmp ebx, 0 
      jne .notZero

      .remZero:
         push dword zRem
         call printf 
         add esp, 4
         jmp .exit

      .notZero:
         push dword nzRem
         call printf 
         add esp, 4 
         jmp .exit


       push eax 
       push dword testQuotient
       call printf 
       add esp, 4 

       

 .exit:  


mov     esp, ebp    ; takedown stack frame
pop     ebp         ; same as "leave" op

mov     eax, 0       ; normal, no error, return value
ret                 ; return