#include "expressions.h"
const double TAX_RATE = 0.0675;

//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write code for multiply_numbers function here
//function returns product of num1 and num2

double get_sales_tax_amount(double meal_amount)
{
	return meal_amount * TAX_RATE;
}


double get_tip_amount(double meal_amount, double tip_rate)
{
	tip_rate = tip_rate / 100;
	 return meal_amount * tip_rate;
}