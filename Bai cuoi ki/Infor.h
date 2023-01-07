#pragma once
#include <iostream>
#include <string>

using namespace std;
class Infor_Student
{
private:
	string Academic_year;
	int grades;
	string courses;
	string nameS;
	int Id_S;

public:
	friend istream& operator >> (istream& Input, Infor_Student& obj) {
		cin.ignore();
		try {
			cout << "Name (up to 20 characters): "; fflush(stdin); getline(Input, obj.nameS);
			if (obj.nameS.size() > 20)
				throw "Error";
		}
		catch(const char *A){
			cout << A << ": character limit exceeded" << endl;
		}
		cout << "Academic year: "; fflush(stdin); getline(Input, obj.Academic_year);
		cout << "Grade: "; Input >> obj.grades;
		cout << "ID: "; Input >> obj.Id_S;
		cin.ignore(100, '\n');
		cout << "Cources: "; fflush(stdin); getline(Input, obj.courses);
		return Input;
	}
	friend ostream& operator << (ostream& Output, Infor_Student& obj) {
		cout << endl;
		Output << "Name: " << obj.nameS << endl;
		Output << "Academic year: " << obj.Academic_year << endl;
		Output << "Grade: " << obj.grades << endl;
		Output << "ID: " << obj.Id_S << endl;
		Output << "Cources: " << obj.courses << endl;
		return Output;
	}
};