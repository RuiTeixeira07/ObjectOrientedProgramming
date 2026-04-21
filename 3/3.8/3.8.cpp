
#include "Date.h"
#include <iostream>

void main()
{
    Date x = Date(1, 3, 7);
    Date y = Date(1, 3, 7);

    if (x == y)
    {
        std::cout << "Equal." << std::endl;
    }
    else
    {
        std::cout << "Not equal." << std::endl;
    }
}