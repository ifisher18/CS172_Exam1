//I affirm that all code given below was written solely by me, Ian , and that any help I received
//adhered to the rules stated for this exam.

///////////////////
// Ian Fisher
// CS 172
// Exam 1
// 10/6/16
//////////////////

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Movie.h"
#include "Theater.h"
using namespace std;


int main()
{
	const int MOVIECOUNT = 11; // sets moviecount to 11
	Movie movieListing[] = { // creates an array that inputs the name of movie, the genre of movie, and the showtime
		Movie("Bull Durham", "Comedy", 0), Movie("Ocean's Eleven", "Action", 2), // array
		Movie("Monte Python's Meaning of Life", "Comedy", 5), Movie("Jaws", "Horror", 7), // array
		Movie("Fletch", "Comedy", 10), Movie("Usual Suspects", "Action", 12), // array
		Movie("Bull Durham", "Comedy", 14), Movie("Ocean's Eleven", "Action", 16), // array
		Movie("Monte Python's Meaning of Life", "Comedy", 19), Movie("Jaws", "Horror", 21), // array
		Movie("Usual Suspects", "Action", 23), // array
	};
	Theater garland("The Garland", "509-327-2509"); // Creates an array that includes the name of theatre and tele. number
	for (int m = 0; m < MOVIECOUNT; m++) {
		garland.AddMovie(movieListing[m]); // for loop that adds movies to the listing based on how many movies there are to add
	}

	// test program to make sure variables and functions are passing correctly
	int errors = 0; // sets errors to 0
	if (garland.GetMovieForHour(-1) != "") {
		errors++;
		cout << "error: not handling -1 correctly\n";
	}
	if (garland.GetMovieForHour(25) != "") {
		errors++;
		cout << "error: not handling 25 correctly\n";
	}
	if (garland.GetMovieForHour(18) != "Monte Python's Meaning of Life") {
		errors++;
		cout << "error: incorrect movie for 18th hour\n";
	}
	if (garland.GetShowTimeForGenre("Comedy") != 0) {
		errors++;
		cout << "error: incorrect Comedy\n";
	}
	if (errors == 0) cout << "Passed\n"; // this is the correct output
	else cout << "Errors: " << errors << endl; // outputs the incremented number of errors
}