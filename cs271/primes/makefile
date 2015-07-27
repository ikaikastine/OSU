project3: prime.asm
	nasm -f elf -l prime.lst prime.asm
	gcc -m32 -o prime  prime.o

clean: 
	rm prime.lst
	rm prime.o
	rm prime
