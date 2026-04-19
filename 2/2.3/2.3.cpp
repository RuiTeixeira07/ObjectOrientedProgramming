
#include <iostream>
#include <fstream>
#include <string>

#define MAX 20
#define STUDENTS_DATA_FILE_PATH "Assets/StudentsData.txt"
#define FILE_DELIMITER ";"

typedef struct Student
{
    char number[MAX];
    std::string name;
    int age;
} STUDENT;

void main()
{
    std::ofstream file;
    int numberOfStudents;

    std::cout << "How many students do you want to register?" << std::endl;
    std::cin >> numberOfStudents;

    file.open(STUDENTS_DATA_FILE_PATH);

	if (file.is_open() == false)
	{
		std::cout << "Error: Could Not Open File." << std::endl;
		return;
	}

	for (int i = 0; i < numberOfStudents; i++)
	{
		STUDENT student;

		std::cout << "Insert your student number: " << std::endl;
		std::cin >> student.number;

		std::cout << "Insert your name: " << std::endl;
		std::getline(std::cin >> std::ws, student.name);

		std::cout << "Insert your age: " << std::endl;
		std::cin >> student.age;

		file << student.number << FILE_DELIMITER << student.name << FILE_DELIMITER << student.age << std::endl;
	}

    file.close();
}