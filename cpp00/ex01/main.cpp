#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cerrno>
#include <climits>
#include "Contact.hpp"
#include "PhoneBook.hpp"

void check_input(std::string message, std::string &ptr)
{
	start:
		std::cout<<message;
		std::getline(std::cin, ptr);
		if(ptr.empty())
		{
			if (std::cin.eof())
				std::cout<<std::endl;
			freopen("/dev/tty", "r", stdin);
			std::cin.clear();
			goto start;
		}
}

void add_contact(int &number, PhoneBook &pb)
{
	std::string ptr;

	check_input("Firstname: ", ptr);
	pb.contacts[number].setFirstName(ptr);
	check_input("Last name: ", ptr);
	pb.contacts[number].setLastName(ptr);
	check_input("Nickname: ", ptr);
	pb.contacts[number].setNickname(ptr);
	check_input("Phone number: ", ptr);
	pb.contacts[number].setPhoneNumber(ptr);
	check_input("Darkest secret: ", ptr);
	pb.contacts[number].setDarkestSecret(ptr);
}

int is_valid_atoi_string(const std::string &s)
{
	size_t i = 0;

	while (i < s.length() && s[i] == ' ')
		i++;
	if (i < s.length() && (s[i] == '+' || s[i] == '-'))
		i++;
	if (i >= s.length() || !std::isdigit(s[i]))
		return 0;
	while (i < s.length())
	{
		if (!std::isdigit(s[i]))
			return 0;
		i++;
	}
	return 1;
}

int	index_checking(PhoneBook& pb)
{
	std::string	index_string;
	int			index;
	errno = 0;

	while(true)
	{
		check_input("Enter index: ", index_string);
		if(!is_valid_atoi_string(index_string))
		{
			std::cout << "must input a valid number" << std::endl;
			continue ;
		}
		else
		{
			index = std::strtol(index_string.c_str(), NULL, 10);
			if (errno == ERANGE || index > INT_MAX || index < INT_MIN)
			{
				std::cout<<index<<std::endl;
				std::cout << "Overflow detected!" << std::endl;
				errno = 0;
				continue ;
			}
			if (index >= pb.index || index < 0)
			{
				std::cout << "index must be between 0 <= index < " << pb.index << std::endl;
				continue;
			}
			else
				return (index);
		}
	}
	
}

int main()
{
	std::string input;
	std::cout<<"phonebook"<<std::endl;
	PhoneBook pb;
	int number;


	number = 0;
	while(true)
	{
		check_input("input a command: ", input);
		if (input == "EXIT")
			break ;
		if (input == "ADD")
		{
			if (number == 8)
				number = 0;
			add_contact(number, pb);
			if (pb.index < 8)
				pb.index++;
			number++;
		}
		else if (input == "SEARCH")
		{
			pb.print_table(pb);
			int index;
			index = index_checking(pb);
			pb.print_contact(pb, index);
		}
	}
}