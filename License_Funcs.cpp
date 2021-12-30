#include "funcs.h"
#include <iostream>
#include <fstream>
#include <time.h>
#include <string>

std::string randomLetters() {
	char randLetter;
	int randNum;

	std::string letters;
	
	srand((unsigned int)time(NULL));
	
	char alphabet[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
						          'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

	for (int i = 0; i < 3; i++) {
		randNum = rand() % 26;
		letters += alphabet[randNum];
	}

	return letters;
}

std::string randomNum() {
	int a, b, c, d;
	std::string num1, num2, num3, num4;
	std::string numbers;

	srand((unsigned int)time(NULL));

	a = rand() % 9 + 1;
	b = rand() % 9 + 1;
	c = rand() % 9 + 1;
	d = rand() % 9 + 1;

	num1 = std::to_string(a);
	num2 = std::to_string(b);
	num3 = std::to_string(c);
	num4 = std::to_string(d);

	numbers = num1 + num2 + num3 + num4;
	return numbers;
}

void write_To_File(std::string fName, std::string fDOB, std::string fState, std::string fLicense) {
	std::ofstream myFile;
	myFile.open("LicenseAndInfo.txt");
	myFile << "Name : " << fName << std::endl
	       << "DOB: " << fDOB << std::endl
	       << "State: " << fState << std::endl
	       << "LICENSE PLATE: " << fLicense << "\n\n";
	myFile.close();
}

void display_Info(std::string dName, std::string dDOB, std::string dState, std::string license) {
	std::cout << "Name: " << dName << std::endl
	          << "DOB: " << dDOB << std::endl
                  << "State: " << dState << std::endl
		  << "LICENSE PLATE: " << license << "\n\n";
}
