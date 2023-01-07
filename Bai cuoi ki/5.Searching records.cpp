#include <iostream>
#include <string>
#include <fstream>
#include "function_MenuAdmin.h"
using namespace std;
void SearchRecord()
{
	fstream myFile, tempFile;
	string student_id;
	int size_file = number_of_lines();
	string* str_line = new string[size_file];
	string line;
	int i = 0;
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
	//find line we have to search
	for (int y = 3; y < size_file; y += 6) {
		if (str_line[y].substr(4).compare(student_id) == 0) {
			for (int z = y - 3; z < y + 2; z++) {
				cout << str_line[z] << endl;
			}
			return;
		}
	}
	cout << "Data doesn't exist" << endl;
	delete []str_line;
}