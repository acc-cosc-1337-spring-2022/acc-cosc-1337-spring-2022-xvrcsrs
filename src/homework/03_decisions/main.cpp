#include<iostream>
#include<string>
#include "decisions.h"
using std::cout; using std::cin; using std::string;
//write include statements


/*
In main write code to capture a letter_grade and credit_hours from the keyboard:


Grade   Credit Hours	grade_points   credit_points
A          3            4              12
B          3            3               9
C          3            2               6
-----------------------------------------------
           9                           27
After each user input convert the Grade to grade points by calling the get_grade_points function, and
keep a running total for both credit_points and credit_hours.

Call the calculate_gpa function with its arguments.
The GPA should calculate to 3.0, make sure to display it before program exits.

Display:
GPA 3.0

*/


int main()
{
	int choice;
	cout<<"MAIN MENU \n";
	cout<<"1-Letter grade using if \n";
	cout<<"2-Letter grade using switch \n";
	cout<<"3-Exit \n";

	cin>>choice;

	if (choice == 1)
	{
		int grade;
		cout<<"Enter your grade: \n";
		cin>>grade;
		cout << "Your grade is: " << get_letter_grade_using_if(grade) << "\n"; 
		
	}

	else if (choice == 2)
	{
		int grade;
		cout<<"Enter your grade: \n";
		cin>>grade;
		cout << "Your grade is: " << get_letter_grade_using_switch(grade) << "\n";
		
	}

	else
	{
		cout << "Have a nice day! \n";
	}
}