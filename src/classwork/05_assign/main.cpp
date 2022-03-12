//write include statements
#include<string>
#include<iostream>
#include "sequence.h"
using std::cout; using std::cin; using std::string;

int main()
{
	int choice;
	app_run();
	cout << "Press 1 to continue or 0 to end \n";
	cin >> choice;
	if (choice == 1)
	{
		app_run();
	}
	else;
	return 0;
}
