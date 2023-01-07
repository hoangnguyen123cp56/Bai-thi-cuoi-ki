#include <iostream>
#include <string>
#include <fstream>
#include "Infor.h"
using namespace std;
void AddRecord() 
{
	int numberS;
	fstream myFile;
	cout << "So luong hoc sinh muon them vao: "; cin >> numberS;
	Infor_Student *Student = new Infor_Student[numberS];
	myFile.open("infor.txt", ios::app);
	if (myFile.is_open()){
		for (int i = 0; i < numberS; i++) {
			cin >> Student[i];
			myFile << Student[i] << endl;
		}
		myFile.close();
	}
	delete[]Student;
	Student = NULL;
}