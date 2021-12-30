#include "funcs.h"
#include <iostream>
#include <vector>

/* Program generates 3 random letters followed by a " - " 
   followed by 4 random numbers and stores them in a text
   file along with name, DOB, and State                  
 */
 
int main() {
	std::string firstName, lastName, name, state;
	char key;
	std::string DOB;

	std::cout << "Welcome to License Plate Generator!\n"
		        << "Please enter Name, DOB, and State.\n\n"
		        << "First name: ";
	std::cin >> firstName;
	std::cout << "Last name: ";
	std::cin >> lastName;

	name = firstName + " " + lastName;

	std::cout << "Enter DOB: ";
	std::cin >> DOB;
	std::cout << "Enter State: ";
	std::cin >> state;
	std::cout << "Enter G to generate: ";
	std::cin >> key;
	std::cout << "\n";

	if (key == 'G') {
		std::string letters, numbers;
		std::string license_Plate;

		letters = randomLetters();
		numbers = randomNum();

		license_Plate = letters + "-" + numbers;
		
		write_To_File(name, DOB, state, license_Plate);
		display_Info(name, DOB, state, license_Plate);
	}
}
