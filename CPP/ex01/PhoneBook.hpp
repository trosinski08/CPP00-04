#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>

# include "Contact.hpp"

# define MAX_CONTACTS 8
# define MAX_WIDTH 10

class PhoneBook {

private:
	Contact	_contacts[MAX_CONTACTS];
	int		_readInput(void) const;
	int		_nbContacts;

public:
	PhoneBook();
	~PhoneBook();
	void	_addContact(void);
	void	_searchContact(void);
	void	_displayContacts(void);
	void	_exit(void) const;
	void	_prompt(void) const;
};

#endif