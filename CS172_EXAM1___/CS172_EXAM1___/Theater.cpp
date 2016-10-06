//I affirm that all code given below was written solely by me, Ian , and that any help I received
//adhered to the rules stated for this exam.

#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
#include "Theater.h"
using namespace std;

Theater::Theater(string Name, string Phone); //The name for this theater
void Theater::AddMovie(Movie& Movie); //Add a movie at a specific time
string Theater::GetMovieForHour(int Hour); //Return the movie shown at or after the given hour
								  // Return "" if none are upcoming
int Theater::GetShowTimeForGenre(string Genre);//When will the movie of the given genre be shown?
									  // Return -1 if none exist
int Theater::GetPopcornPrice(); //Make up a cost in dollars 
