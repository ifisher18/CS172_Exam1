//I affirm that all code given below was written solely by me, Ian , and that any help I received
//adhered to the rules stated for this exam.

#pragma once

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Movie {
public:
	//Come up with a default movie for your theater
	Movie();
	// for Genre, only Action, Comedy, Horror, and Documentary. If none of those,
	// default to Comedy
	Movie(string Title, string Genre, int ShowTime);

	string GetTitle(); // Returns the movie title

	string GetGenre(); // Returns the movie genre

	int GetShowtime(); // When is this movie shown?
private:
	string Title; // private variable since each Title is different
	string Genre; // private since each Genre is seperate and is called seperate
	int ShowTime; // private since each ShowTime is specific to an object
	string movietitlecheck;
};
