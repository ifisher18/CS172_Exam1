//I affirm that all code given below was written solely by me, Ian , and that any help I received
//adhered to the rules stated for this exam.

#pragma once // used to prevent multiple inclusions of the same header file (avoids mix-ups)

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>


using namespace std;


class Theater { // class named Theater
// this header file is used to define the class as well as to define each function that will be used. Although AddMovie appears to have an error (function is not defined), the general idea is that this area is used to define elements of the class.
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
