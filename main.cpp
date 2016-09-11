// Program name: Josh plays frisbee golf
// Author: Joshua Thatcher now 20% cooler with Rainbow Dash
// Date last updated: 8/27/2016
// Purpose: Main function tests out class.

#include <iostream>
#include "folfclass.h"
#include <stdlib.h>

using namespace std;

int main()
{
	// declare variables for user input
	string name;
	double tosses; 
	double tosses1;    // two tosses variables created to adjust the correct score via handicap
	double tosses2;   // two tosses variables created to adjust the correct score via handicap
	double games;    // a way to enter total games into a new object
	double ID;       // a way to enter id into new object
	int handicap;   //  allows handicap to be subtracted from score

					// Request user for information regarding first golfer
	cout << "What is the name of the golfer?" << endl;
	cin >> name;
	cout << "How many games has " << name << " played total?" << endl;
	cin >> games;
	cout << "How many tosses were there for " << name << " total?" << endl;
	cin >> tosses;

	// Generate random ID
	ID = rand() % 100;

	// Construct Golfer One
	Golfer golfer1{ name, ID, tosses, games };

	// Request user for information regarding second golfer
	cout << "What is the name of the golfer?" << endl;
	cin >> name;
	cout << "How many games has " << name << " played total?" << endl;
	cin >> games;
	cout << "How many tosses were there for " << name << " total?" << endl;
	cin >> tosses;

	// Generate random ID
	ID = rand() % 100;

	//Construct Golfer Two
	Golfer golfer2{ name, ID, tosses, games };

	/*//Input new game for golfer1
	cout << "Please add the number of tosses for " << golfer1.getName() << " for the next game." << endl;
	cin >> tosses;
	golfer1.addScore(tosses);

	cout << "Please add the number of tosses for " << golfer2.getName() << " for the next game." << endl;
	cin >> tosses;
	golfer2.addScore(tosses); */
	 //commented out code because I don't feel like having another game before the OTHER GAME */

	// Tells users info based on total tosses games names and stuff
	cout << "Golfer " << golfer1.getName() << ", ID #" << golfer1.getID() << ", has an average of " << golfer1.getAverage() << "." << endl;
	cout << "Golfer " << golfer2.getName() << ", ID #" << golfer2.getID() << ", has an average of " << golfer2.getAverage() << "." << endl;

	// Finally, a new games begins.
	cout << "Please enter score of new game for Golfer " << golfer1.getName() << "." << endl;
	cin >> tosses1;
	cout << "Please enter score of new game for Golfer " << golfer2.getName() << "." << endl;
	cin >> tosses2;


	// All possible winning,losing scenarios are predicted for handicaps.
	if (tosses1 > tosses2)
	{
		tosses = tosses1 - golfer1.handicap(golfer2.getAverage());
		if (tosses < tosses2)
			cout << "Congratulations, " << golfer1.getName() << " is the winner!" << endl;
		else if (tosses > tosses2)
			cout << "Congratulations, " << golfer2.getName() << " is the winner!" << endl;
		else if (tosses = tosses2)
			cout << "Congratulations, everyone wins! Pie for everyone" << endl;
	}
	else if (tosses2 > tosses1)
	{
		tosses = tosses2 - golfer2.handicap(golfer1.getAverage());
		if (tosses < tosses1)
			cout << "Congratulations, " << golfer2.getName() << " is the winner!" << endl;
		else if (tosses > tosses1)
			cout << "Congratulations, " << golfer1.getName() << " is the winner!" << endl;
		else if (tosses = tosses1)
			cout << "Congratulations, everyone wins! Pie for everyone" << endl;
	}
	else
		cout << "Congratulation, everyone wins! Pie for everyone" << endl;

	// Main reason I had three tosses variables was so that I could stores the original scores in properly before handicap was applied
	golfer1.addScore(tosses1);
	golfer2.addScore(tosses2);

	// Now that no good rotten cheating newbie with his precious handicap will see that it won't save his/her average. hah.
	cout << "Golfer " << golfer1.getName() << ", ID #" << golfer1.getID() << ", has an average of " << golfer1.getAverage() << "." << endl;
	cout << "Golfer " << golfer2.getName() << ", ID #" << golfer2.getID() << ", has an average of " << golfer2.getAverage() << "." << endl;
	

	cin.get();
	cin.ignore();
}

