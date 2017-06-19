//Arne Zargarian
//1218735
//CSIS 135
//Lab 7

#include <iostream>
#include <fstream>
#include <string>
#include "read.h"

using namespace std;

int main()
{
	ifstream inFile; // any object name can be used here
	double value;
	string fileName;
	cin >> fileName;
	int myArray[10];
	inFile.open(fileName); // open the file
						   // check that the connection was opened successfully   
	if (inFile.fail())
	{
		cout << "\nThe file was not successfully opened"
			<< "\n Please check that the file currently exists."
			<< endl;
		exit(1);
	}
	else
		cout << "file opened\n";
	inFile >> value;


	if (inFile.is_open())
	{

		for (int i = 0; i < 10; ++i)
		{
			inFile >> myArray[i];
		}
	}
	bubbleSort(myArray, 10);
	for (int index = 0; index < 10; index++)
		cout << myArray[index] << " ";
	cout << endl;
	inFile.close();
	system("pause");
}