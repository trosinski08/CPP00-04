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
	return _formatField(this->_firstName, MAX_WIDTH);
}

void	Contact::_setLastName(std::string lastName) {
	this->_lastName = lastName;
}

std::string	Contact::_getLastName(void) const {
	return _formatField(this->_lastName, MAX_WIDTH);
}

void	Contact::_setNickname(std::string nickname) {
	this->_nickname = nickname;
}
std::string	Contact::_getNickname(void) const {
	return _formatField(this->_nickname, MAX_WIDTH);
}

std::string	Contact::_formatField(std::string field, int width) const {
	width = MAX_WIDTH;
	if (field.length() > width) {
		return field.substr(0, width - 1) + ".";
	}
	return std::string(width - field.length(), ' ') + field;
}

std::string	Contact::_getInput(std::string field) const {
	std::string input;

	std::cout << "Enter " << field << ": ";
	std::getline(std::cin, input);
	if (input.empty()) {
		std::cout << "Invalid input." << std::endl;
		return _getInput(field);
	}
	return input;
}

void	Contact::_setPhoneNumber(std::string phoneNumber) {
	this->_phoneNumber = phoneNumber;
}

std::string	Contact::_getPhoneNumber(void) const {
	return _formatField(this->_phoneNumber, MAX_WIDTH);
}

void	Contact::_setDarkestSecret(std::string darkestSecret) {
	this->_darkestSecret = darkestSecret;
}

std::string	Contact::_getDarkestSecret(void) const {
	return _formatField(this->_darkestSecret, MAX_WIDTH);
}

int	Contact::_isInitialized(void) {
	if (this->_firstName.empty() && this->_lastName.empty() && this->_nickname.empty() && this->_phoneNumber.empty() && this->_darkestSecret.empty()) {
		return false;
	}
	return true;
}