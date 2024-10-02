#include "PhoneBook.hpp"



int main(void) {
	PhoneBook	phoneBook;
	std::string	input;

	while (1) {
		phoneBook._prompt();
		std::getline(std::cin, input);
		if (input == "ADD") {
			phoneBook._addContact();
		} else if (input == "SEARCH") {
			phoneBook._searchContact();
		} else if (input == "EXIT") {
			phoneBook._exit();
			break;
		} else {
			std::cout << "Invalid command." << std::endl;
		}
	}
	return 0;
}