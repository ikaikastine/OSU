#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include "netflix.h"

using namespace std;

bool found_match (int type, string search, string line);

//Default Constructor
netflix::netflix() {
    num_movies = 0;
    m = NULL;
}

//Constructor
netflix::netflix(movie userMovie, int numMovies) {
    num_movies = numMovies;
    *m = userMovie;
}

//Copy Constructor
netflix::netflix(const netflix &value) {
    if (num_movies == 0) {
        m = NULL;
    }
    num_movies = value.num_movies;
    m = new movie [num_movies];
    for (int i = 0; i < num_movies; i++) {
        m[i] = value.m[i]; 
    }
}

//Destructor
netflix::~netflix() {
    delete [] m;
}

//Function to start searching
void netflix::searchMovie() {
	getMovieType();
}

/*********************************************************************
** Function: getMovieType
** Description: Allows the user to search by category
** Parameters: None
** Pre-Conditions: None
** Post-Conditions: Choice is made
*********************************************************************/
void netflix::getMovieType() {
	int type;
	cout << "Search for movies by: 1 - Name, 2 - Stars, 3 - Cast Member, 4 - Rating" << endl;
	cin >> type;

	if (type == 1) {
		string input;
		cout << "Please enter the movie title" << endl;
		cin.ignore(1, '\n');
		getline(cin, input);
		searchTitle(input);
	}
	else if (type == 2) {
		int input;
		cout << "Please enter the number of stars" << endl;
		cin >> input;
		searchStars(input); 
	}
	else if (type == 3) {
		string input;
		cout << "Please enter the name of a cast member" << endl;
		cin.ignore(1, '\n');
        getline(cin, input);
		searchCast(input);
	}
	else if (type == 4) {
		string input;
		cout << "Please enter the rating" << endl;
		cin.ignore(1, '\n');
        getline(cin, input);
        searchRating(input);
	}
	
}


/*********************************************************************
** Function: searchTitle
** Description: function which searches for the movie based on title
** Parameters: string 
** Pre-Conditions: pass in a string
** Post-Conditions: movie is found or not
*********************************************************************/
void netflix::searchTitle(string input) {
	fstream output;
	string line;
	int rentMovie;
	movie m;
    int counter = 1;
	output.open("netflix.dat", fstream::in | fstream::out | fstream::app);
    int lineCount = 0;
    while(getline(output, line)) {
        if (line.length() > 0) {
            lineCount++;
        }
    }
    output.close();
    char str[256];
    char *inputTitle = new char[input.length() + 1];
    strcpy(inputTitle, input.c_str());
    output.open("netflix.dat", fstream::in | fstream::out);
    for (int i = 0; i < lineCount; i++) {	//Go through the different movies
    	for (int j = 0; j < 1; j++) {		//Title is the second data field
    		output.get(str, 256, '|');
    		output.get(str, 2);
    	}
    	output.get(str, 256, '|');			//Get title info
    	if (!strcmp(str, inputTitle)) {
    		output.getline(str, 256);
    		cout << "We have title: " << counter << "|" << input << str << endl;
    		cout << "Which movie would you like to rent? (number)" << endl;
    		cin >> rentMovie;
    		output.seekg(0);
    		for (int j = 0; j < 1; j++) {		//Title is the second data field
    			output.get(str, 256, '|');
    			output.get(str, 2);
    		}
    		output.get(str, 256, '|');			//Get title info
    		cout << "Movie, " << input << ", rented!" << endl;
            break;
    	}
        output.get(str, 256, '\n');
        counter++;
    }
    delete [] inputTitle;
}

/*********************************************************************
** Function: searchStars
** Description: searches for movies based on stars
** Parameters: int 
** Pre-Conditions: pass in an int
** Post-Conditions: movie is found
*********************************************************************/
void netflix::searchStars(int input) {
    fstream output;
    string line;
    int rentMovie;
    movie m;
    int counter = 1;
    output.open("netflix.dat", fstream::in | fstream::out | fstream::app);
    int lineCount = 0;
    while(getline(output, line)) {
        if (line.length() > 0) {
            lineCount++;
        }
    }
    output.close();
    char str[256];
    int length;
    output.open("netflix.dat", fstream::in | fstream::out);
    for (int i = 0; i < lineCount; i++) {   //Go through the different movies
        for (int j = 0; j < 3; j++) {       //Title is the second data field
            output.get(str, 256, '|');
            output.get(str, 2);
        }
        output.get(str, 256, '|');          //Get title info
        length = atoi(str);
        if (length == input) {
            output.seekg(0);
            //cout << "DEUBG: counter = " << counter << endl;
            for (int k = 0; k < counter; k++) {
                output.getline(str, 256);
            }
            cout << "We have: " << str << endl;
        }
        output.get(str, 256, '\n');
        counter++;
    }
    output.close();
    output.open("netflix.dat", fstream::in | fstream::out);
    cout << "Which movie would you like to rent? (number)" << endl;
    cin >> rentMovie;
    output.seekg(0);
    for (int k = 0; k < rentMovie - 1; k++) {
        output.getline(str, 256);
        //cout << "DEBUG: str = " << str << endl;
        for (int j = 0; j < 1; j++) {       //Title is the second data field
            output.get(str, 256, '|');
            output.get(str, 2);
        }
        output.get(str, 256, '|');          //Get title info
    }
    cout << "Movie, " << str << ", rented!" << endl;
}

/*********************************************************************
** Function: searchCast
** Description: function which searches for the movie based on cast member
** Parameters: string 
** Pre-Conditions: pass in a string
** Post-Conditions: movie is found or not
*********************************************************************/
void netflix::searchCast(string input) {
    fstream output;
    string line;
    int rentMovie;
    movie m;
    int counter = 1;
    output.open("netflix.dat", fstream::in | fstream::out | fstream::app);
    int lineCount = 0;
    while(getline(output, line)) {
        if (line.length() > 0) {
            lineCount++;
        }
    }
    output.close();
    char str[256];
    char *inputCast = new char[input.length() + 1];
    strcpy(inputCast, input.c_str());
    output.open("netflix.dat", fstream::in | fstream::out);
    for (int i = 0; i < lineCount; i++) {   //Go through the different movies
        for (int j = 0; j < 4; j++) {       //Title is the second data field
            output.get(str, 256, '|');
            output.get(str, 2);
        }
        output.get(str, 256, '|');          //Get title info
        if (!strcmp(str, inputCast)) {
            output.seekg(0);
            for (int k = 0; k < counter; k++) {
                output.getline(str, 256);
            }
            cout << "We have: " << str << endl;
            cout << "Which movie would you like to rent? (number)" << endl;
            cin >> rentMovie;
            output.seekg(0);
            for (int k = 0; k < counter - 1; k++) {
                output.getline(str, 256);
                for (int j = 0; j < 1; j++) {       //Title is the second data field
                    output.get(str, 256, '|');
                    output.get(str, 2);
                }
            }
            output.get(str, 256, '|');          //Get title info
            cout << "Movie, " << str << ", rented!" << endl;
            break;
        }
        output.get(str, 256, '\n');
        counter++;
    }
    delete [] inputCast;
}

/*********************************************************************
** Function: searchRating
** Description: function which searches for the movie based on rating
** Parameters: string 
** Pre-Conditions: pass in a string
** Post-Conditions: movie is found or not
*********************************************************************/
void netflix::searchRating(string input) {
    fstream output;
    string line;
    int rentMovie;
    movie m;
    int counter = 1;
    output.open("netflix.dat", fstream::in | fstream::out | fstream::app);
    int lineCount = 0;
    while(getline(output, line)) {
        if (line.length() > 0) {
            lineCount++;
        }
    }
    output.close();
    char str[256];
    char *inputRating = new char[input.length() + 1];
    strcpy(inputRating, input.c_str());
    output.open("netflix.dat", fstream::in | fstream::out);
    for (int i = 0; i < lineCount; i++) {   //Go through the different movies
        for (int j = 0; j < 5; j++) {       //Title is the second data field
            output.get(str, 256, '|');
            output.get(str, 2);
        }
        output.get(str, 256, '|');          //Get title info
        if (!strcmp(str, inputRating)) {
            output.seekg(0);
            for (int k = 0; k < counter; k++) {
                output.getline(str, 256);
            }
            cout << "We have: " << str << endl;
        }
        output.get(str, 256, '\n');
        counter++;
    }
    output.close();
    output.open("netflix.dat", fstream::in | fstream::out);
    cout << "Which movie would you like to rent? (number)" << endl;
    cin >> rentMovie;
    output.seekg(0);
    for (int k = 0; k < rentMovie - 1; k++) {
        output.getline(str, 256);
        for (int j = 0; j < 1; j++) {       //Title is the second data field
            output.get(str, 256, '|');
            output.get(str, 2);
            
        }
        output.get(str, 256, '|');          //Get title info
    }
    cout << "Movie, " << str << ", rented!" << endl;
    delete [] inputRating;
}