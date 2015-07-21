connect: play_cf.o connect_four.o 
	g++ -g -Wall -o connect play_cf.o connect_four.o 

play_cf.o: play_cf.cpp connect_four.h
	g++ -g -Wall -c play_cf.cpp

connect_four.o: connect_four.cpp connect_four.h
	g++ -g -Wall -c connect_four.cpp

clean:
	rm *.o
	rm connect
