//I affirm that all code given below was written solely by me, Ian , and that any help I received
//adhered to the rules stated for this exam.

#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
#include "Movie.h"
using namespace std;

//Come up with a default movie for your theater
Movie::Movie() {

}
// for Genre, only Action, Comedy, Horror, and Documentary. If none of those,
// default to Comedy
Movie::Movie(string Title, string Genre, int ShowTime) {

}

string Movie::GetTitle() { // Returns the movie title
	return Title;
} 
string Movie::GetGenre() { // Returns the movie genre
	return Genre;
}

int Movie::GetShowtime() { // When is this movie shown?
	return ShowTime;
}