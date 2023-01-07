#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int number_of_lines() {
	int NumberOfline = 0;
	string line;
	fstream myFile;
	myFile.open("infor.txt", ios::in);
	if (myFile.is_open()) {
		while (getline(myFile, line))
		{
			NumberOfline++;
		}
		myFile.close();
	}
	return NumberOfline;
}