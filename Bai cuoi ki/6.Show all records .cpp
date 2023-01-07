#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void ShowRecord() 
{
	fstream myFile;
	string line;
	myFile.open("infor.txt", ios::in);
	if (myFile.is_open()) {
		while (getline(myFile, line)) {
			cout << line << endl;
		}
		myFile.close();
	}
}