project3: array.asm
	nasm -f elf -l array.lst array.asm
	gcc -m32 -o array  array.o

clean: 
	rm array.lst
	rm array.o
	rm array
