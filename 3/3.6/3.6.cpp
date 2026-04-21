
#include <iostream>
#include "Date.h"

void main()
{
    Date x = Date();
    Date y = Date(1, 3, 7);

    x.show();
    y.show();

    x.update();
    x.show();

    y.update(9, 27, 51);
    y.show();
}