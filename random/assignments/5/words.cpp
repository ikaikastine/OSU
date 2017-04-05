/*****************
 * Program Name: words.cpp
 * Author: Kevin Stine
 * Date: 5/29/14
 * Input: A line of words from the user
 * Output: Count how many words there are, and how many of each letter is in the string
 ****************/

#include <iostream>
#include <string>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

using namespace std;

//Count the words in the string, delimited by whitespace
int count_words (string line) {
	int num_words = 0;
	unsigned int i = 0;
	int num_spaces = 0;

	for (i = 0; i < line.length(); i++) {
		if (isspace(line.at(i))) {
			i++;
		}
		else if (isspace(line.at(i))) {
			num_spaces++;
		
			while(isspace(line.at(i++))) { 
				if (line.at(i) == '\0') { 
					num_spaces--;
				}
			}
		}
	}
	return num_spaces + 1;
}

//Count the letters, using 255 as the ascii standard for values
void count_letters (int count[255], string line) {
	for (int i = 0; i < 255; i++) 
		count[i] = 0;
	
	int len = strlen(line.c_str());
	for (int j = 0; j < len; j++) 
		count[line[j]]++;
}

//take the array of ASCII values and convert so only lowercase letters are counted
void print_letters (int count[255]) {
	char letters[26] = {'a','b','c','d','e','f','g','h','i','j','k','l',
			    'm','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int final[26];
	for (int i = 0; i < 26; i++) {
		final[i] = count[65+i] + count[97+i];
		if (final[i] > 0) {
			cout << final[i] << " " << letters[i] << endl;
		}
	}
}
		
	
int main() {
	int error, num_words;
	
	char line[100];
	int count[255];
	cout << "Please enter in a line of words." << endl;
	cin.getline (line, 100);
	
	cout << "\nYou have " << count_words(line) << " words with these letters: " << endl;
	count_letters(count, line);
	print_letters(count);
	cout << "\n";

	return 0;
} 
