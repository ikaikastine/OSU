/******************************************************
** Program: main.cpp
** Author: Kevin Stine
** Date: 04/26/2015
** Description: Netflix Assignment
** Input: Add or Search for a movie
** Output: Movie added to file or rented
******************************************************/
#include <iostream>
#include <fstream>
#include "netflix.h"

using namespace std;

int main() {
    fstream iofile;
    int choice;
    int numMovies;
    movie newMovie;
    netflix movieList;
    
    iofile.open ("netflix.dat", fstream::in | fstream::out | fstream::app);
    do {
        cout << "Please choose from the following:" << endl;
        cout << "1 - enter a new movie to the database, 2 - search for a movie to rent, 0 - quit" << endl;
        cin >> choice;
        
        if (choice == 1) {
            cout << "How many movies would you like to input into the database?" << endl;
            cin >> numMovies;
            for (int i = 0; i < numMovies; i++) {
                newMovie.initMovie();
                newMovie.addToFile("netflix.dat");
            }
        }
        else if (choice == 2) {
            movieList.searchMovie();
            //return 0;
        }
        else {
            return 0;
        }
    } while (choice != 0);
    iofile.close();
    
    return 0;
}