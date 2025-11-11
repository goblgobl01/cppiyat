#include "header.h"

int main()
{
	std::string input;
	std::string ptr;
	std::cout<<"welcome the phonebook\n";
	PhoneBook pb;
	int number;

	number = 0;
	while(std::cin>>input && input != "EXIT")
	{
		if (input == "ADD")
		{
			std::cout<<"Firstname: ";
			std::cin>>ptr;
			pb.contacts[number].setFirstName(ptr);
		}
	}
}