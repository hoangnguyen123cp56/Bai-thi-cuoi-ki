#include <iostream>
#include <string>
#include <fstream>
#include "function_MenuAdmin.h"
#include "Infor.h"
using namespace std;
void UpdateRecord()
{
	fstream myFile, tempFile;
	Infor_Student Nstudent;
	string student_id;
	int size_file = number_of_lines();
	string* str_line = new string[size_file];
	string tempStr[6];
	string line, line2;
	int i = 0,z=0;
	//Ask user what Student id they wanna search:
	cout << "Enter student id you want to search: "; cin >> student_id;
	cout << endl;
	//Assign line by line from file into string array
	myFile.open("infor.txt", ios::in);
	if (myFile.is_open()) {
		while (getline(myFile, line)) {
			str_line[i].assign(line);
			i++;
		}
		myFile.close();
	}
	//Old data
	for (int y = 3; y < size_file; y += 6) {
		if (str_line[y].substr(4).compare(student_id) == 0) {
			cout << "OLD DATA" << endl;
			cout << "------------" << endl;
			for (int z = y - 3; z < y + 2; z++) {
				cout << str_line[z] << endl;
			}
			cout << endl;
		}
	}
	//New data
	cout << "NEW DATA" << endl;
	cout << "------------" << endl;
	cin >> Nstudent;
	tempFile.open("tempInfor.txt", ios::out);
	if (tempFile.is_open()) {
		tempFile << Nstudent << endl;
		tempFile.close();
	}
	tempFile.open("tempInfor.txt", ios::in);
	if (tempFile.is_open()) {
		while (getline(tempFile, line2)) {
			tempStr[z].assign(line2);
			z++;
		}
		tempFile.close();
	}
	int c = 0;
	for (int a = 3; a < size_file; a += 6) {
		if (str_line[a].substr(4).compare(student_id) == 0) {
			for (int b = a - 3; b < a + 2; b++) {
				str_line[b].assign(tempStr[c]);
				c++;
			}
		}
	}
	myFile.open("infor.txt", ios::out);
	if (myFile.is_open()) {
		for (int d = 0; d < size_file; d++) {
			myFile << str_line[d] << endl;
		}
		myFile.close();
	}
	cout << "Data has been updated" << endl;
	remove("tempInfor.txt");
	delete[]str_line;
}