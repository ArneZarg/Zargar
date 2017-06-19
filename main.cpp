#include "Stats.h"
#include <fstream>
#include <string>
#include <iomanip>
#include < iostream>

using namespace std;

int main()
{
	//double numRain;
	string filename;
	Stats rainfall;
	All stats;
	rainfall.readValuesFromFile("raining.txt");
	rainfall.printValues();
	stats = rainfall.getAll();
	cout << fixed << setprecision(2);
	cout << "Average: " << stats.average << endl; 
	cout << "Max: " << stats.max << endl;
	cout << "Min: " << stats.min << endl;
	cout << "Sending data to file..." << endl;
	writeStatsToFile("rainstats.txt", stats);
	cout << "Done." << endl;
	system("pause");
}