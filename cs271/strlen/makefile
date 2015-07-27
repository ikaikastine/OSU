project3: strlen.asm
	nasm -f elf -l strlen.lst strlen.asm
	gcc -m32 -o strlen  strlen.o

clean: 
	rm strlen.lst
	rm strlen.o
	rm strlen
