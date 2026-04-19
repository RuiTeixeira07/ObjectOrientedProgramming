
#include <iostream>
#include <fstream>

void main()
{
    char inputDataFilePath[] = "Assets/InputData.txt";
    char outputDataFilePath[] = "Assets/OutputData.txt";

    std::ifstream f1;
    std::ofstream f2;

    int a, b;

    f1.open(inputDataFilePath);

    if (f1.is_open() == false)
    {
        std::cout << "Error: File Not Found." << std::endl;
    }

    f2.open(outputDataFilePath);

    if (f2.is_open() == false)
    {
        std::cout << "Error: Could Not Open File." << std::endl;
    }

    f1 >> a >> b;
    f2 << a * a << std::endl << b * b;

    f1.close();
    f2.close();
}