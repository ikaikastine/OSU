extern printf 
SECTION .data               ; Data section, initialized variables
 array5:     db "Hello, my name is Kevin.", 0
 array5Len:  equ $-array5-1
 asoutput:   db "%s", 0        ; string output
 newline:    db "", 10, 0      ; format for a new line
 acoutput: db "%c: ", 0                 ; output format for character output
 freqNum:   db "%d", 0
 arrLen:    db "The length of the array is %d", 10, 0

 greeting:  db "Your string is as follows: ", 10, 0

SECTION .bss                   ; BSS, uninitialized variables
 arrayq:     resd 128          ; frequency array of the first 127 ascii values initialized to 0 (none have been counted yet)

SECTION .text
  global main           ; the standard gcc entry point
  main:                 ; the program label for the entry point
    push    ebp         ; set up stack frame
    mov     ebp,esp

    mov esi, array5
    mov edi, 0
    mov ebx, arrayq
    mov ecx, array5Len


    
; get each character of array5 and add 1 to the frequency table of the corresponding ascii value (which the arrayq is indexed by ascii value).
.loopf:
    xor eax, eax
    mov al, [esi]
    ;mov ax, [esi]
    ;mov ax, al
    ;mov cx, ax
    add edi, eax
    mov ebx, 1
    add [arrayq+4*edi], ebx

    mov edi, 0
    add esi, 1
    loop .loopf

    push dword array5
    push dword asoutput
    call printf
    add esp, 8

    push dword newline
    call printf
    add esp, 4

    ;pop ebx    
    mov ebx, arrayq
    mov ecx, 128                            ; size of arrayq
    mov esi, 0                              ;start at beginning
.loopa:
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
    push dword acoutput
    call printf
    add esp, 8
    pop ecx
    pop ebx

    push ebx
    push ecx                                    ; make sure to put ecx (counter) on stack so we don't lose it when calling printf)
    push dword [ebx + esi]                  ; put the value of the array at this (esi) index on the stack to be used by printf
    ;push dword acoutput                          ; put the array output format on the stack for printf to use
    push dword freqNum
    call printf                                 ; call the printf command
    add esp, 8                                  ; add 4 bytes * 2
    pop ecx                                     ; get ecx back
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
    loop .loopa
.end:
    mov     esp, ebp    ; takedown stack frame
    pop     ebp         ; same as "leave" op