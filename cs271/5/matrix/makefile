project3: matrix.asm
	nasm -f elf -l matrix.lst matrix.asm
	gcc -m32 -o matrix  matrix.o

clean: 
	rm matrix.lst
	rm matrix.o
	rm matrix
