//write include statements
#include<iostream>
#include "variables.h"


//write namespace using statement for cout



int main()
{
	int num;
	std::cout<<"Enter a number: ";
	std::cin>>num;
	
	int result;
	result = multiply_numbers(num);
	std::cout<<result<<"\n";
	
	int num1 = 4;
	result = multiply_numbers(num1);
	std::cout<<result;

	return 0;
}
