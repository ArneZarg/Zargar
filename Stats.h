#pragma once
//Arne Zargarian
//CSIS 135
//lab8p2
/*
STRUCT ALL{double avg, min, max}
-------------------------------------
class Stats 
-------------------------------------
private:
	double rainfall[12];
	double largest;
	double smallest;
	//const int NUM_MONTHS = 12;
--------------------------------------
public:
	void setValue(int, double);
	void printValues(Stats);
	double getTotal();   // get functions
	double getAvg();
	double getLargest();
	double getSmallest();
	Stats();
	void readValuesFromFile();
	All getAll(All);*/
#include <string>
#include <iomanip>
#include <iostream>
#include <fstream>
#ifndef STATS_H
#define STATS_H


using std::string;
struct All {
	double average;
	double max;
	double min;
};
class Stats {

private:
	double rainData[12];
	double largest;
	double smallest;
	//const int NUM_MONTHS = 12;

public:
	void setValue(int, double);
	void printValues();
	double getTotal();   // get functions
	double getAvg();
	double getLargest();
	double getSmallest();
	Stats();
	void readValuesFromFile(string);
	All getAll();
};

void writeStatsToFile(string, All);
#endif