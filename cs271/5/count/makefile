project3: int.asm
	nasm -f elf -l int.lst int.asm
	gcc -m32 -s -o int  int.o

clean: 
	rm int.lst
	rm int.o
	rm int
