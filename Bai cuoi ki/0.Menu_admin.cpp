#include <iostream>
#include <string>
#include "function_MenuAdmin.h"
using namespace std;
void InterFace_menu(int &selection) {
	cout << endl << endl << endl << endl << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t\t\t|                  Admin                   |" << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t\t\t|                                          |" << endl;
	cout << "\t\t\t\t\t|          [1]  Adding records             |" << endl;
	cout << "\t\t\t\t\t|          [2]  Removing records           |" << endl;
	cout << "\t\t\t\t\t|          [3]  Removing all records       |" << endl;
	cout << "\t\t\t\t\t|          [4]  Updating records           |" << endl;
	cout << "\t\t\t\t\t|          [5]  Searching records          |" << endl;
	cout << "\t\t\t\t\t|          [6]  Show all records           |" << endl;
	cout << "\t\t\t\t\t|          [7]  Total of records           |" << endl;
	cout << "\t\t\t\t\t|                                          |" << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t\t\t|                [8]  Exit                 |" << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
	cout << endl << "\t\t\t\t\t" << "Enter selection: "; cin >> selection;
	system("cls");
}
void menu_admin()
{
	system("cls");
	int selection;
	string check;
	do {
		InterFace_menu(selection);
		switch (selection)
		{
		case 1:
			AddRecord();
			break;
		case 2:
			RemoveRecord();
			break;
		case 3:
			RemoveAll();
			break;
		case 4:
			UpdateRecord();
			break;
		case 5:
			SearchRecord();
			break;
		case 6:
			ShowRecord();
			break;
		case 7:
			totalRecord();
			break;
		case 8:
			return;
		default:
			break;
		}
		cout << endl << "Continue (yes/no): "; cin >> check;
		system("cls");
	}while (check.compare("yes") == 0);
}
