#include "PhoneBook.hpp"
#include <string>
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook():index(0) {}
void PhoneBook::print_table(PhoneBook pb)
{
	int i;

	i = 0;
	while(i < pb.index)
	{
		std::string ptr;

		std::cout<<"|";
		std::cout << std::right << std::setw(10)<< i;
		std::cout<<"|";
		ptr = pb.contacts[i].getFirstName();
		if (ptr.length() > 10)
			ptr = ptr.substr(0, 9) + ".";
		std::cout << std::right << std::setw(10)<< ptr;
		std::cout<<"|";
		ptr = pb.contacts[i].getLastName();
		if (ptr.length() > 10)
			ptr = ptr.substr(0, 9) + ".";
		std::cout << std::right << std::setw(10)<< ptr;
		std::cout<<"|";
		ptr = pb.contacts[i].getNickname();
		if (ptr.length() > 10)
			ptr = ptr.substr(0, 9) + ".";
		std::cout << std::right << std::setw(10)<< ptr;
		std::cout<<"|";
		std::cout<<std::endl;
		i++;
	}
}

void PhoneBook::print_contact(PhoneBook pb, int index)
{
	std::string	ptr;

	std::cout<<"First name: ";
	ptr = pb.contacts[index].getFirstName();
	std::cout<<ptr<<std::endl;
	std::cout<<"Last name: ";
	ptr = pb.contacts[index].getLastName();
	std::cout<<ptr<<std::endl;
	std::cout<<"Nickname: ";
	ptr = pb.contacts[index].getNickname();
	std::cout<<ptr<<std::endl;
	std::cout<<"Phone number: ";
	ptr = pb.contacts[index].getPhoneNumber();
	std::cout<<ptr<<std::endl;
	std::cout<<"Darkest secret: ";
	ptr = pb.contacts[index].getDarkestSecret();
	std::cout<<ptr<<std::endl;
}