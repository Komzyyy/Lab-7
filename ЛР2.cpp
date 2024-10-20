#include <iostream>
#include "windows.h"
#include <iomanip>

using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "String1\n" << '\t' << "String2\n" << '\t' << '\t' << "String3\n";
	cout << '\t' << "String1\n" << "String2\n";
	cout << "3" << "*" << '\t' << "String\n1\n";
}