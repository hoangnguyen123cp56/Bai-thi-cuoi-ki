#include <iostream>
#include <string>
#include <fstream>
#include "function_MenuAdmin.h"
using namespace std;
void RemoveRecord() 
{
	fstream myFile, tempFile;
	string student_id;
	int size_file = number_of_lines(), Nsize_file = number_of_lines() - 6;
	string* str_line = new string[size_file];
	string* New_str_line = new string[size_file];
	string line;
	int i = 0, a = 0;
//Assign line by line from file into string array
	myFile.open("infor.txt", ios::in);
	if (myFile.is_open()) {
		while (getline(myFile, line)) {
			str_line[i].assign(line);
			i++;
		}
		myFile.close();
	} 
//check if file don't have any record
	if (i == 0) {
		cout << "No data to remove" << endl;
		return;
	}
//Ask user what Student id they wanna delete:
	cin.ignore();
	cout << "Enter student id you want to delete: "; getline(cin, student_id);
//find line we have to delete
	for (int y = 3; y < size_file; y+=6) {
		if (str_line[y].substr(4).compare(student_id) == 0) {
			for (int z = 0; z < Nsize_file; z++) {
				if ((a >= y-3)&&(a<=y+2)) {
					z--;//khi nằm trong phạm vi cần loại bỏ thì z ko tiếp tục tăng lên với z là index của New_str_line
					a++;
					continue;
				}
				New_str_line[z].assign(str_line[a]);
				a++;
			}
		}
	}
	myFile.open("infor.txt", ios::out);
	if (myFile.is_open()) {
		for (int b = 0; b < Nsize_file; b++) {
			myFile << New_str_line[b] << endl;
		}
	}
	cout << "Data has been updated" << endl;
	delete []str_line;
	delete []New_str_line;
}
