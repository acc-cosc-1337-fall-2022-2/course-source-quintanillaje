//write include statements


//write namespace using statement for cout


/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
#include <iostream>
using std::cin;
#include "data_types.h"

int main()
{
	int num;
	cin>> num;
	int result = multiply_numbers(num);
	std::cout<< result<< std::endl;
	int num1 = 4;	
	result = multiply_numbers(num1);
	std::cout<<result<<std::endl;
	return 0;
}
