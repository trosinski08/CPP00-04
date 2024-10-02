#ifndef Contact_HPP
# define Contact_HPP

# include <iostream>
# include <string>
# include <iomanip>

# define MAX_CONTACTS 8
# define MAX_WIDTH 10

class Contact {
private:
	int			_index;
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_phoneNumber;
	std::string	_darkestSecret;

	std::string	_formatField(std::string field, int width) const;

public:
	Contact();
	~Contact();

	void		_setIndex(int index);
	int			_getIndex(void) const;

	void		_setFirstName(std::string _firstName);
	std::string	_getFirstName(void) const;

	void		_setLastName(std::string _lastName);
	std::string	_getLastName(void) const;

	void		_setNickname(std::string _nickname);
	std::string	_getNickname(void) const;

	void		_setPhoneNumber(std::string _phoneNumber);
	std::string	_getPhoneNumber(void) const;

	void		_setDarkestSecret(std::string _darkestSecret);
	std::string	_getDarkestSecret(void) const;

	int			_isInitialized(void);

	// std::string	_formatField(std::string field, int width);
	
	std::string _getInput(std::string field) const;
};

#endif