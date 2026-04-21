
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

    if (x << y)
    {
        std::cout << x.getDay();
        std::cout << "/" << x.getMonth() << "/";
        std::cout << x.getYear();

        std::cout << " lesser than ";

        std::cout << y.getDay();
        std::cout << "/" << y.getMonth() << "/";
        std::cout << y.getYear();

        std::cout << std::endl;
    }

    if (x >> y)
    {
        std::cout << x.getDay();
        std::cout << "/" << x.getMonth() << "/";
        std::cout << x.getYear();

        std::cout << " greater than ";

        std::cout << y.getDay();
        std::cout << "/" << y.getMonth() << "/";
        std::cout << y.getYear();

        std::cout << std::endl;
    }
}