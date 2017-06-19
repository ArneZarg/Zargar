//Arne Zargarian
//CSIS 135
//lab8p2

#include <string>
#include <iomanip>
#include <iostream>
#include <fstream>
#include "Stats.h"

using namespace std;

Stats::Stats(void)
{
	for (int x = 0; x < 12; x++)
	{
		rainData[x] = 0.0;
	}
}
void Stats::setValue(int subscript, double value)
{
	if (value < 0)
		value = 0;
	rainData[subscript] = value;
	return;
}
void Stats::printValues()
{
	for (int i = 0; i < 12; i++)
	{
		cout << "Rain for " << i << " is " << rainData[i] << endl;
	}
	return;
}
double Stats::getTotal()
{
	double total = 0;
	for (int i = 0; i < 12; i++)
	{
		total += rainData[i];
	}
	return total;
}
double Stats::getAvg()
{
	double average, total = 0;
	for (int i = 0; i < 12; i++)
	{
		total += rainData[i];
	}
	average = total / 12;
	return average;
}
double Stats::getLargest()
{
	largest = rainData[0];
	for (int i = 1; i < 12; i++)
	{
		if (rainData[i] >  largest)
			largest = rainData[i];
	}

	return largest;
}
double Stats::getSmallest()
{
	smallest = rainData[0];
	for (int i = 0; i < 12; i++)
	{
		if (rainData[i] < smallest)
			smallest = rainData[i];
	}
	return smallest;
}
void Stats::readValuesFromFile(string filename) {
	double value;
	int count = 0;
	for (int i = 0; i < 12; i++)
	{
		rainData[i] = 0.0;
	}
	ifstream inFile;
	inFile.open(filename);
	if (inFile.fail())
	{
		cout << "File was not successfully opened." << endl
			<< "Pls check that the file exists" << endl;
		exit(1);
	}
	cout << "The file has been successfully opened." << endl;
	while (!inFile.eof())
	{
		inFile >> value;
		rainData[count] = value;
		count++;
	}
	inFile.close();
	return;
}
All Stats::getAll() {
	All temp;
	temp.average = getAvg();
	temp.max = getLargest();
	temp.min = getSmallest();
	return temp;
}
void writeStatsToFile(string filename, All data) {
	ofstream outFile;
	outFile.open(filename.c_str());
	if (outFile.fail())
	{
		cout << "File was not successfully opened." << endl;
		exit(1);
	}
	outFile << fixed << setprecision(2);
	outFile << "Average is " << data.average << endl
		<< "Max is " << data.max << endl
		<< "Min is " << data.min << endl;
	outFile.close();
	return;
}