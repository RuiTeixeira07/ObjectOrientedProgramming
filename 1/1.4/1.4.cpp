
#include <iostream>
#include <iomanip>

void main()
{
	int numberOfDigits = 6;

	std::cout << "setprecision Example" << std::endl;
	
	std::cout << "Integer and Decimal Part" << std::endl;
	std::cout << std::setprecision(numberOfDigits) << 1537.8374652 << std::endl; // Value rounds up.

	std::cout << "Decimal Part" << std::endl;
	std::cout.setf(std::ios::floatfield, std::ios::fixed);
	std::cout << std::setprecision(numberOfDigits) << 28473876.8463055 << std::endl; // Value rounds up.
}