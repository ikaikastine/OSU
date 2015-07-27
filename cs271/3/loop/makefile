project3: loop.asm
	nasm -f elf -l loop.lst loop.asm
	gcc -m32 -o loop  loop.o

clean: 
	rm loop.lst
	rm loop.o
	rm loop
