#ifndef NETFLIX_H
#define NETFLIX_H
#include "movie.h"
#include <string>


class netflix {
private:
    movie *m;	//Dynamic array of movies
    int num_movies;
    
public:
    netflix();
    netflix(movie, int);
    netflix(const netflix &);
    ~netflix();
    void searchMovie();
    void getMovieType();
    string getTypeString(int);
    void initMovies(int, string);
    void fillMovies(int, string);
    bool found_match (int, string, string);
    bool find_title (string, string);
    void searchTitle(string);
    void searchStars(int);
    void searchCast(string);
    void searchRating(string);

};

#endif