
#include <iostream>
#include "Date.h"

void main()
{
    Date x = Date(1, 3, 7);
    Date y = Date(1, 3, 7);

    std::cout << x.is_equal(y) << std::endl;
}