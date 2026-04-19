
#include <iostream>
#include <string>

void main()
{
	int integerNumber;
	float floatingNumber;
	char character;
	std::string string;

	std::cout << "Insert an integer number: ";
	std::cin >> integerNumber;

	std::cout << "Insert a floating number: ";
	std::cin >> floatingNumber;

	std::cout << "Insert a character: ";
	std::cin >> character;

	std::cout << "Insert a string: ";
	std::getline(std::cin >> std::ws, string);

	std::cout << "Integer number: " << integerNumber << std::endl;
	std::cout << "Floating number: " << floatingNumber << std::endl;
	std::cout << "Character: " << character << std::endl;
	std::cout << "String: " << string << std::endl;
}