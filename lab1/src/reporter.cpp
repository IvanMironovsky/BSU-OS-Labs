#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include "employee.h"
#include "controller.h"

int main(int argc, char* argv[]) {
	{
		std::string usage = "Expected 3 arguments. Usage: Reporter [binaryFileName] [outputFileName] [paymentForHour]";
		if (argc != 4) {
			std::cerr << usage << "\n";
			return 1;
		}
	}

	std::string binFile(argv[1]);
	std::string reportFile(argv[2]);
	double paymentForHour = atof(argv[3]);

	Controller::createReportFile(binFile, reportFile, paymentForHour);
	
	return 0;
}