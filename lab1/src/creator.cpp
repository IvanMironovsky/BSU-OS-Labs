#include <iostream>
#include <fstream>
#include <string>
#include "employee.h"
#include "controller.h"

int main(int argc, char* argv[]) {
	{
		std::string usage = "Usage: Creator [filename] [number of entries]";
		if (argc != 3) {
			std::cerr << usage << "\n";
			return 1;
		}
	}

	std::string binFile = std::string(argv[1]);
	size_t numberOfEntries = static_cast<size_t>(atoi(argv[2]));
	Employee* employees = new Employee[numberOfEntries];
	std::string message = "Enter entries in the form: [id] [employeeName] [hours worked]";

	std::cout << message << "\n";
	for (size_t i = 0; i < numberOfEntries; ++i) {
		std::cin >> employees[i].num >> employees[i].name >> employees[i].hours;
	}

	Controller::createBinaryFile(binFile, employees, numberOfEntries);

	delete[] employees;
	return 0;
}