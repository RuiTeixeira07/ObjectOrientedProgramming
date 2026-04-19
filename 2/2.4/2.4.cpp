
#include <iostream>
#include <string>
#include <fstream>

#define STUDENTS_DATA_FILE_PATH "Assets/StudentsData.txt"
#define FILE_DELIMITER ';'

typedef struct
{
    std::string number;
    std::string name;
    int age;

} STUDENT;

void main()
{
    STUDENT student;
    std::ifstream file;

    file.open(STUDENTS_DATA_FILE_PATH);

    if (file.is_open() == false)
    {
        std::cout << "Error: File Not Found." << std::endl;
    }

    std::getline(file, student.number, FILE_DELIMITER);
    std::getline(file, student.name, FILE_DELIMITER);
    file >> student.age;

    std::cout << "Number: " << student.number << std::endl;
    std::cout << "Name: " << student.name << std::endl;
    std::cout << "Age: " << student.age << std::endl;
}