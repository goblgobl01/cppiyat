#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	public:
		PhoneBook();
		int index;
		Contact contacts[8];
		void print_table(PhoneBook pb);
		void print_contact(PhoneBook pb, int index);
};

#endif