#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <errno.h>
#include "movie.h"

using namespace std;

//Default Constructor 
movie::movie() {
    name = ' ';
    stars = 0;
    num_cast = 0;
    cast = NULL;
    rating = ' ';
    copies = 0;
}

//Constructor 
movie::movie(string n, int s, int numCast, string* c, string rate, int copy) {
    name = n;
    stars = s;
    num_cast = numCast;
    cast = new string [num_cast];
    rating = rate;
    copies = copy;
}

//Copy Constructor 
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

//Destructor 
movie::~movie() {
    delete [] cast;
}

/*********************************************************************
** Function: castArray
** Description: creates an array for each cast member
** Parameters: int
** Pre-Conditions: pass in an int
** Post-Conditions: array is created
*********************************************************************/
string* castArray(int num_cast) {
    string* array = new string [num_cast];
    for (int i = 0; i < num_cast; i++) {
        cout << "What is the name of the cast member?" << endl;
        if (i == 0) {
            cin.ignore(1, '\n');
        }
        getline(cin, array[i]);
    }
    return array;
}

/*********************************************************************
** Function: initMovie
** Description: prompts the user to input the categories
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/
void movie::initMovie() {
    cout << "Please enter a title: ";
    cin.ignore(1, '\n');
    getline(cin, name);
    cout << "Please enter the number of stars: ";
    cin >> stars;
    cout << "Please enter the number of cast members: ";
    cin >> num_cast;
    cast = castArray(num_cast);
    cout << "Please enter a rating: ";
    cin >> rating;
    cout << "Please enter the number of copies: ";
    cin >> copies;
    rented = 0;
}

/*********************************************************************
** Function: addToFile
** Description: write the movie description to the file
** Parameters: string
** Pre-Conditions: pass in string file
** Post-Conditions: info is written to the file
*********************************************************************/
void movie::addToFile (string file) {
    string line;
    fstream output;
    
    output.open("netflix.dat", fstream::in | fstream::out | fstream::app);
    
    int lineCount = 0;
    while(getline(output, line)) {
        if (line.length() > 0) {
            lineCount++;
        }
    }
    lineCount++;
    output.close();
    
    output.open("netflix.dat", fstream::in | fstream::out | fstream::app);
    
    output << lineCount << "|" << name << "|" << stars << "|" << num_cast << "|";
    for (int i = 0; i < num_cast; i++) {
        output << cast[i] << "|";
    }
    output << rating << "|" << copies << "|" << rented << "\n";
    
    output.close();
    
}
