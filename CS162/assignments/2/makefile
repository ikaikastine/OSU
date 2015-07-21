netflix: main.o netflix.o movie.o
	g++ -g -Wall -o netflix main.o netflix.o movie.o

main.o: main.cpp movie.h netflix.h
	g++ -g -Wall -c main.cpp

netflix.o: netflix.cpp netflix.h
	g++ -g -Wall -c netflix.cpp

movie.o: movie.cpp movie.h
	g++ -g -Wall -c movie.cpp

clean:
	rm *.o
	rm netflix
