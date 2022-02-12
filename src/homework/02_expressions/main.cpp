//write include statements
#include "expressions.h"
#include<iostream>


//write namespace using statement for cout
using std::cout;
using std::cin;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	//initialize variables
	double meal_amount;
	double tip_rate;
	double tip_amount;
	double tax_amount;
	double total;

	//Ask for meal amount
	cout<<"How much was your meal? ";
	cin>>meal_amount;

	//Calculate tax
	tax_amount = get_sales_tax_amount(meal_amount);

	//Ask for tip percentage
	cout<<"What percentage would you like to tip? ";
	cin>>tip_rate;

	//Get tip amount
	tip_amount = get_tip_amount(meal_amount, tip_rate);

	//Get total
	total = meal_amount + tip_amount + tax_amount;

	//Print results
	cout<<"Meal Amount: "<<meal_amount<<"\n";
	cout<<"Sales Tax: "<<tax_amount<<"\n";
	cout<<"Tip Amount: "<<tip_amount<<"\n";
	cout<<"Total: "<<total<<"\n";

	return 0;
}
