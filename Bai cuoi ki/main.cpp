#include <iostream>
#include <string>
#include "Infor.h"
#include "Menu.h"
using namespace std;
void Login(int &choice) {
	cout << endl << endl << endl << endl << endl;
	cout << "\t\t\t\t\t____________________________________________" << endl;
	cout << "\t\t\t\t\t|           STUDENT RECORD SYSTEM          |" << endl;
	cout << "\t\t\t\t\t|------------------------------------------|" << endl;
	cout << "\t\t\t\t\t|                  LOG IN                  |" << endl;
	cout << "\t\t\t\t\t|------------------------------------------|" << endl;
	cout << "\t\t\t\t\t|                                          |" << endl;
	cout << "\t\t\t\t\t|               (1). Admin                 |" << endl;
	cout << "\t\t\t\t\t|               (2). User                  |" << endl;
	cout << "\t\t\t\t\t|               (3). Exit                  |" << endl;
	cout << "\t\t\t\t\t|                                          |" << endl;
	cout << "\t\t\t\t\t|__________________________________________|" << endl;
	cout << endl << "\t\t\t\t\t" <<"Enter selection: "; cin >> choice;
	system("cls");
}
int main() {
	int choice;
	string check;
	string acc_N = "none";
	string nameAcc = "admin";
	int acc_P = 0;
	do {
		Login(choice);
		switch (choice)
		{
		case 1:
		{
			do {
				system("cls");
				cin.ignore();
				cout << "Username: ";  cin >> acc_N;
				cout << "Password: "; cin >> acc_P;
			} while (((acc_N.compare(nameAcc) != 0) && (acc_P != 12345)));
			menu_admin();
			break;
		}
		case 2:
			menu_user();
			break;
		case 3:
			return(0);
		default:
			exit(0);
		}
		cout << endl << "Continue editing (yes/no): "; cin >> check;
		system("cls");
	} while (check.compare("yes") == 0);
	return 0;
}