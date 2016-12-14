#include "Command.h"
#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;
Command::Command()
{
	line1 = 0;
	line2 = 0;
}

double Command::distanceCalculate(double valueArr[40][3]) {

	double minDis = 0;
	double currentDis = 0;
	double temp = 100;

	int index1;
	int index2;
	int n = 0;
	for (int i = 0; i < 40; i++)
	{

		currentDis = sqrt(pow(valueArr[i][0] - valueArr[i + 1][0], 2) + pow(valueArr[i][1] - valueArr[i + 1][1], 2) + pow(valueArr[i][2] - valueArr[i + 1][2], 2));


		if (currentDis < temp)
		{
			temp = currentDis;
			index1 = i;
			index2 = i + 1;
		}

	}

	double newArr[40][3];
	for (int i = 0; i < 40; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			newArr[index1][j] = NULL;
			newArr[index2][j] = NULL;

			if (i != index1&&i != index2)
			{
				newArr[i][j] = valueArr[i][j];
			}

		}

	}


	ofstream myfile("cba.txt");
	myfile << "Min Distance: " << temp << endl;
	myfile << "Row:" << index1 << ", ";
	myfile << "Row:" << index2 << endl;

	line1 = index1;
	line2 = index2;

	for (int i = 0; i < 40; i++)
	{
		for (int j = 0; j < 3; j++) {

			myfile << newArr[i][j] << " ";

		}
		myfile << endl;
	}

	

	return temp;
}

int Command::getLine1() {
	return line1;
}

int Command::getLine2() {
	return line2;
}
Command::~Command()
{
}
