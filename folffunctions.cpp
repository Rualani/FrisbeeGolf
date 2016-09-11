#pragma once
// Program name: Josh plays frisbee golf
// Author: Joshua Thatcher now 20% cooler with Rainbow Dash
// Date last updated: 8/27/2016
// Purpose: class which stores golfer information

#include <string>
#include "Folfclass.h"
#include <iostream>
using namespace std;

double Golfer::percentagefactor = .8;

	// class constructor
		Golfer::Golfer(string Name, double id, double Tosses, double Games) {
		name = Name;
		ID = id;
		tosses = Tosses;
		games = Games;
	}

	// Accessor Methods
	string Golfer::getName()
	{
		return name;
	}
	double Golfer::getID()
	{
		return ID;
	}
	double Golfer::getTosses()
	{
		return tosses;
	}
	double Golfer::getGames()
	{
		return games;
	}
	double Golfer::getAverage()
	{
		return (tosses / games);
	}

	// Mutator Methods
	void Golfer::setName(string Name)
	{
		name = Name;
	}
	void Golfer::setID(double id)
	{
		if (id > 0) {
			ID = id;
		}
		ID = id;
	}
	void Golfer::addScore(double Tosses)
	{
		games += 1;
		if (Tosses > 0)
		{
			tosses += Tosses;
		}
		tosses += Tosses;
		calculateAverage();
	}
	double Golfer::getPercent()
	{
		return percentagefactor;
	}

	void Golfer::calculateAverage()
	{
		average = tosses / games;
	}
	int Golfer::handicap(int otherAverage)
	{
		int handicap = otherAverage - average;
		handicap = percentagefactor * handicap;
		if (handicap < 0)
			return 0;
		else
			return handicap;
	}


