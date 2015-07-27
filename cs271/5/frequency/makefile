project3: frequency.asm
	nasm -f elf -l frequency.lst frequency.asm
	gcc -m32 -o frequency  frequency.o

clean: 
	rm frequency.lst
	rm frequency.o
	rm frequency
