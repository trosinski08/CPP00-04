#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->_nbContacts = 0;
}

PhoneBook::~PhoneBook() {
}

void	PhoneBook::_addContact(void) {
	if (this->_nbContacts < MAX_CONTACTS) {
		this->_contacts[this->_nbContacts]._setIndex(this->_nbContacts);
		this->_contacts[this->_nbContacts]._setFirstName(this->_contacts[this->_nbContacts]._getInput("first name"));
		this->_contacts[this->_nbContacts]._setLastName(this->_contacts[this->_nbContacts]._getInput("last name"));
		this->_contacts[this->_nbContacts]._setNickname(this->_contacts[this->_nbContacts]._getInput("nickname"));
		this->_contacts[this->_nbContacts]._setPhoneNumber(this->_contacts[this->_nbContacts]._getInput("phone number"));
		this->_nbContacts++;
	} else {
		std::cout << "Phone book is full." << std::endl;
	}
}

void	PhoneBook::_searchContact(void) {
	int		index;
	std::string	input;

	if (this->_nbContacts == 0) {
		std::cout << "Phone book is empty." << std::endl;
		return;
	}
	this->_displayContacts();
	std::cout << "Enter index: ";
	std::getline(std::cin, input);
	index = std::stoi(input);
	if (index >= 0 && index < this->_nbContacts) {
		std::cout << "First name: " << this->_contacts[index]._getFirstName() << std::endl;
		std::cout << "Last name: " << this->_contacts[index]._getLastName() << std::endl;
		std::cout << "Nickname: " << this->_contacts[index]._getNickname() << std::endl;
		std::cout << "Phone number: " << this->_contacts[index]._getPhoneNumber() << std::endl;
	} else {
		std::cout << "Invalid index." << std::endl;
	}
}

void	PhoneBook::_displayContacts(void) {
	int		i;

	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First name" << "|";
	std::cout << std::setw(10) << "Last name" << "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;
	i = 0;
	while (i < this->_nbContacts) {
		std::cout << std::setw(10) << this->_contacts[i]._getIndex() << "|";
		std::cout << std::setw(10) << this->_contacts[i]._getFirstName() << "|";
		std::cout << std::setw(10) << this->_contacts[i]._getLastName() << "|";
		std::cout << std::setw(10) << this->_contacts[i]._getNickname() << std::endl;
		i++;
	}
}

void	PhoneBook::_prompt(void) const {
	std::cout << "-----------------------------------------" << std::endl;
	std::cout << "|***************************************|" << std::endl;
	std::cout << "|           Welcome in 80's !!!         |" << std::endl;
	std::cout << "| Available commands: ADD, SEARCH, EXIT |" << std::endl;
	std::cout << "|***************************************|" << std::endl;
	std::cout << "-----------------------------------------" << std::endl;

}

void	PhoneBook::_exit(void) const {
	std::cout << "Goodbye!" << std::endl;
}