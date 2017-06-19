//Arne Zargarian
//1218735
//CSIS 135
//Lab 7

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "read.h"

using namespace std;

void bubbleSort(int ary[], int length)
{
	bool swapped;

	do
	{
		swapped = false;
		for (int index = 0; index < length - 1; index++)
		{
			if (ary[index] > ary[index + 1]) {
				swap(ary[index], ary[index + 1]);
				swapped = true;
			}
		}
		length--;
	} while (swapped);
}
