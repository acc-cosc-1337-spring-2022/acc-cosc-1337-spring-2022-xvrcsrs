#include "dna.h"
#include<string>
#include<iostream>
using std::cout; using std::cin; using std::string;

/*
write the function code for the factorial and gcd functions using a loop of your choice
*/

int factorial(int num)
{
    int res = 1, i;
    for(i = 2; i <= num; i++)
        res *= i;
    
    return res;
}

/*
write functino to get greatest common divisor
*/

int gcd(int num1, int num2)
{
    while (!(num1 == num2))
    {
        if (num1 < num2)
        {
            int temp;
            temp = num1;
            num1 = num2;
            num2 = temp;
        }
        else if (num1 > num2)
        {
            num1 = num1 - num2;
        }
    }
    return num1;
}

/*
Function to display menu
*/

void display_menu()
{
    cout << "1 - Factorial \n";
    cout << "2 - Greatest Common Divisor \n";
    cout << "3 - Exist \n";
}

/*
Functino to prompt users for input
*/

void prompt_user_1()
{
    cout << "Enter one number \n";
}

void prompt_user_2()
{
    cout << "Enter two numbers \n";
}

/*
Run the application
*/

void app_run()
{
    int choice, num1, num2;
    do
	{
		display_menu();
		cin >> choice;
		if (choice == 1)
		{
			prompt_user_1();
			cin >> num1;
			cout << factorial(num1) << "\n";

		}
		else if (choice == 2)
		{
			prompt_user_2();
			cin >> num1;
			cin >> num2;
			cout << gcd(num1, num2) << "\n";
		}

	} while (!(choice == 3));
}