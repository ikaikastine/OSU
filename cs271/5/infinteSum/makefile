sum: sum.asm
	nasm -f elf -l sum.lst sum.asm
	gcc -m32 -o sum  sum.o

clean: 
	rm sum.lst
	rm sum.o
	rm sum
