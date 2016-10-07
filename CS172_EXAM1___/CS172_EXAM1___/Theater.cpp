//I affirm that all code given below was written solely by me, Ian , and that any help I received
//adhered to the rules stated for this exam.

#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
#include "Theater.h"
#include "Movie.h"
using namespace std;


Theater::Theater(string Name, string Phone) { //The name for this theater
	Name = "The Garland"; // the name of the theatre
	Phone = "509-327-2509"; // a phone number to reach the theatre
}

void AddMovie(Movie& Movie) { //Add a movie at a specific time
	// while the below code may not compile, the logic of what I am doing is that in order to add a movie given a time, you need an incrementor that keeps track of what each showtime is
	const int MOVIECOUNT = 11;
	int showtime;
	for (int h = 0; h > MOVIECOUNT; h++) {
		if (Hour == showtime) {// based on the specific showtime, this if statement checks if Hour is at the right time to add movie
			Movie++; // adds a movie given the specific time above
		}
		
	}

}
string Theater::GetMovieForHour(int Hour) { //Return the movie shown at or after the given hour
	// the below code checks to see if the given showtimes match with the movie titles. If this is the case, then each if statement returns the correct movie title
	if (Hour == 0 || Hour == 14) { // series of if statements that returns title of movie based on the hour that it is playing
		return "Bull Durham";
	}
	if (Hour == 2 || Hour == 16) { // if the showtime is 2 or 16, the correct movie is returned
		return "Ocean's Eleven";
	}
	if (Hour == 5 || Hour == 19) { // if the showtime is 5 or 19, the correct movie is returned
		return "Monte Python's Meaning of Life";
	}
	if (Hour == 7 || Hour == 21) { // if the showtime is 7 or 21, the correct movie is returned
		return "Jaws";
	}
	if (Hour == 10) { // if the showtime is 10, the correct movie is returned
		return "Fletch";
	}
	if (Hour == 12 || Hour == 23) { // of the showtime is 12 or 23, the correct movie is returned
		return "Usual Suspects";
	}
	else cout << "" << endl; // if the showtime is not within these parameters, whitespace is returned
}
								  // Return "" if none are upcoming
int Theater::GetShowTimeForGenre(string Genre) { //When will the movie of the given genre be shown?
	// This function takes into account the Genre of the movie as well as at what time the given genre will be shown
	for (int i = 0; i > 4;i++) {//size.movielisting; i++) {
		if (Genre == "Comedy") {
			return 0;
		}
		else if (Genre == "Action") {
			return 2;
		}
		else if (Genre == "Horror") {
			return 7;
		}
		else cout << "" << endl;
	}
}

// functions that get the price of popcorn and Coke
									  // Return -1 if none exist
int Theater::GetPopcornPrice() { //Make up a cost in dollars 
	// this function takes into account the popcorn price as a 'get' function and returns value based on the number of popcorns ordered
	int numPop;
	if (numPop <= 0) {
		return -1;
	}
	else {
		return PopPrice; // price of popcorn
	}
}

int Theater::GetCokePrice() { // make up a cost on Coke
	// Same idea with this function, except with Coke and not popcorn
	return CokePrice; // returns the price of Coke
}
