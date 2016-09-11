#pragma once
// Program name: Josh plays frisbee golf
// Author: Joshua Thatcher now 20% cooler with Rainbow Dash
// Date last updated: 8/27/2016
// Purpose: class which stores golfer information

#include <string>

using namespace std;

class Golfer {
public:
	// class constructor
	explicit Golfer(string Name, double id, double Tosses, double Games);

	// Accessor Methods
		string getName();
		double getID();
		double getTosses();
		double getGames();
		double getAverage();

		// Mutator Methods
		void setName(string Name);
		void setID(double id);
		void addScore(double Tosses);
		void calculateAverage();

		// Static Accessor Method
		static double getPercent();

		// methods to calculate hanicap
		int handicap(int otherAverage);



private:
	double ID;
	string name;
	double tosses;
	double games;
	int average;
	static double percentagefactor;
};

