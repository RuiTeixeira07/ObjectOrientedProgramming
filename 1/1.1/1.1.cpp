
#include <iostream>

void main()
{
	int age;
	char name[30];

	std::cout << "Insert your age: \n";
	std::cin >> age;

	std::cout << "Insert your name: \n";
	std::cin >> name;

	std::cout << "Your name is " << name << " and you're " << age << " years old.";
}