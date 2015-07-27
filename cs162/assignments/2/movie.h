#ifndef MOVIE_H
#define MOVIE_H
#include <string>
using std::string;

class movie {
private:
    string name;
    int stars;
    int num_cast;
    string *cast;	//Dynamic array of strings
    string rating;
    int copies;
    
public:
    movie();
    movie(string, int, int, string*, string, int);
    movie(const movie &);
    ~movie();
    void enterMovie(movie &, int);
    void initMovie();
    void addToFile(string);
    int rented;
    
};

#endif