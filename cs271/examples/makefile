printf: example2.asm
	nasm -f elf -l example2.lst example2.asm
	gcc -m32 -o example2  example2.o

example1: example1.asm
	nasm -f elf -l example.lst  example1.asm
	gcc -m32 -o example1  example1.o

example2: example2.asm
	nasm -f elf -l example.lst  example2.asm
	gcc -m32 -o example2  example2.o
