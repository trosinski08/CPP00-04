#include "Contact.hpp"

Contact::Contact() {

}

Contact::~Contact() {

}

void	Contact::_setIndex(int index) {
	this->_index = index;
}

int		Contact::_getIndex(void) const {
	return this->_index;
}

void	Contact::_setFirstName(std::string firstName) {
	this->_firstName = firstName;
}

std::string	Contact::_getFirstName(void) const {
	return this->_firstName;
}

void	Contact::_setLastName(std::string lastName) {
	this->_lastName = lastName;
}

std::string	Contact::_getLastName(void) const {
	return this->_lastName;
}

void	Contact::_setNickname(std::string nickname) {
	this->_nickname = nickname;
}

std::string	Contact::_getNickname(void) const {
	return this->_nickname;
}

std::string	Contact::_formatField(std::string field, int width) const {
	width = MAX_WIDTH;
	if (field.length() > width) {
		return field.substr(0, width - 1) + ".";
	}
	return field;
}

std::string	Contact::_getInput(std::string field) const {
	std::string input;

	std::cout << "Enter " << field << ": ";
	std::getline(std::cin, input);
	return input;
}

void	Contact::_setPhoneNumber(std::string phoneNumber) {
	this->_phoneNumber = phoneNumber;
}

std::string	Contact::_getPhoneNumber(void) const {
	return this->_phoneNumber;
}
