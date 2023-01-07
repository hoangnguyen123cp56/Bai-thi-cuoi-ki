#include <iostream>
#include <fstream>
using namespace std;
void RemoveAll() {
	fstream myFile;
	myFile.open("infor.txt", ios::out | ios::trunc);
	cout << "All data have been deleted" << endl;
	myFile.close();
}