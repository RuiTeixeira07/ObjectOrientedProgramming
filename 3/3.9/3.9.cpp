
#include <iostream>
#include "Date.h"

void main()
{
    Date x = Date(1, 1, 1970);
    Date y = Date(1, 3, 7);

    if (x != y)
    {
        std::cout << "Not equal." << std::endl;
    }
    else
    {
        std::cout << "Equal." << std::endl;
    }

    std::cout << x << std::endl;
    std::cin >> x;
    std::cout << x << std::endl;
}