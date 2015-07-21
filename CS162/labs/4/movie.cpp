#include <iostream>
#include <string>
#include "movie.h" 

using namespace std;

movie::movie() {
	name = ' ';
	stars = 0;
	num_cast = 0;
	rating = ' ';
	copies = 0;
}

movie::movie(int userCast) {
	num_cast = userCast;
	cast = new string [num_cast]; 
}

movie::~movie() {
	//for (int i = 0; i < num_cast; i++) {
	//	delete [] cast[i];
	//}
	delete [] cast;
}

movie::movie(const movie &value) {
	if (num_cast == 0) {
		cast = NULL;
	}
	num_cast = value.num_cast;
	cast = new string [num_cast];
	for (int i = 0; i < num_cast; i++) {
		cast[i] = value.cast[i]; 
	}
}

void movie::operator= (const movie &value) {
	if (cast != NULL) {
		delete [] cast;
	}
	else {
		cast = new string [num_cast];
		for (int i = 0; i < num_cast; i++) {
			cast[i] = value.cast[i]; 
		}
	}
}