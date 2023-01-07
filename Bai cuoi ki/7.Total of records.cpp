#include <iostream>
#include <string>
#include <fstream>
#include "function_MenuAdmin.h"
using namespace std;
void totalRecord() 
{
	fstream myFile;
	int sizeOfl = number_of_lines();
	int total;
	total = sizeOfl / 6;
	cout << "Total of records: " << total << endl;
}