#include <iostream>
#include <fstream>

#include "movie.h" 

using namespace std;

void fun(movie main_mov) {
	movie m(9);
	m = main_mov;
}


int main() {
	//movie m(4);
	//fun(m);
	fstream iofile;
	char str[256];

	iofile.open("netflix.dat", fstream::in | fstream::out | fstream::app);
	while(!iofile.eof()) { //is the character read or viewed the eof
    	for (int j = 0; j < 8; j++) {		//Title is the second data field
    		iofile.get(str, 256, '|');
    		iofile.get(str, 2);
    	}
    	iofile.get(str, 256, '|');			//Get title info
    	cout << "STR = " << str << endl;
    	iofile.get(str, 256, '\n');
 	iofile.peek(); //Don’t read data, look if there is another movie
	}
	
	return 0;
}