//I affirm that all code given below was written solely by me, Ian , and that any help I received
//adhered to the rules stated for this exam.

#pragma once // used to prevent multiple inclusions of the same header file (avoids mix-ups)

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

class Theater {
public:
	Theater(string Name, string Phone); //The name for this theater
	void AddMovie(Movie& Movie); //Add a movie at a specific time
	string GetMovieForHour(int Hour); //Return the movie shown at or after the given hour
									  // Return "" if none are upcoming
	int GetShowTimeForGenre(string Genre);//When will the movie of the given genre be shown?
										  // Return -1 if none exist
	int GetPopcornPrice(); //Make up a cost in dollars 
	int GetCokePrice();// make up a cost on Coke
private:
	int PopPrice; // private variable since only pertains to a certain portion of the class, shouldn't be accessed freely
	int CokePrice; // private variable since ''       ' '                      ''              ''       ''
	string Movie; // test private variable
};
