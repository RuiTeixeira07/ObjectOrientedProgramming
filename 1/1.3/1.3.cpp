
#include <iostream>
#include <iomanip>

void main()
{
	int whitespacesBeforeOutput = 100;
	char fillCharacter = 'x';

	std::cout << "setw Example" << std::endl;
	std::cout << std::setw(whitespacesBeforeOutput); // Width only set for next output.
	std::cout << 3 << std::endl;
	std::cout << 7 << std::endl;
	std::cout << std::setw(whitespacesBeforeOutput) << 11 << std::endl;

	std::cout << "setfill Example (using setw)" << std::endl;
	std::cout << std::setfill(fillCharacter) << std::setw(whitespacesBeforeOutput); // Width only set for next output.
	std::cout << 14 << std::endl;
	std::cout << 21 << std::endl;
	std::cout << std::setfill(fillCharacter) << std::setw(whitespacesBeforeOutput) << 27 << std::endl;
}