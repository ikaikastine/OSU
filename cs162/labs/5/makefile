vehicle: main.o vehicle.o bike.o car.o skateboard.o motorcycle.o 
	g++ -g -Wall -o vehicle main.o vehicle.o bike.o car.o skateboard.o motorcycle.o Date.o

main.o: main.cpp bike.h vehicle.h Date.h
	g++ -g -Wall -c main.cpp

vehicle.o: vehicle.cpp vehicle.h
	g++ -g -Wall -c vehicle.cpp

bike.o: bike.cpp bike.h
	g++ -g -Wall -c bike.cpp

car.o: car.cpp car.h
	g++ -g -Wall -c car.cpp

skateboard.o: skateboard.cpp skateboard.h
	g++ -g -Wall -c skateboard.cpp

motorcycle.o: motorcycle.cpp motorcycle.h
	g++ -g -Wall -c motorcycle.cpp

clean:
	rm vehicle
