//I affirm that all code given below was written solely by me, Ian , and that any help I received
//adhered to the rules stated for this exam.

#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
#include "Movie.h"
#include "Theater.h"
using namespace std;

//Come up with a default movie for your theater
Movie::Movie() {
	Title = "Finding Nemo";
	Genre = "Comedy";
	ShowTime = 8;
}
// for Genre, only Action, Comedy, Horror, and Documentary. If none of those,
// default to Comedy
Movie::Movie(string Title, string Genre, int ShowTime) {
	
}

string Movie::GetTitle() { // Returns the movie title (one line)
	return Title;
} 
string Movie::GetGenre() { // Returns the movie genre
	return Genre;
}

int Movie::GetShowtime() { // When is this movie shown?
	return ShowTime;
}