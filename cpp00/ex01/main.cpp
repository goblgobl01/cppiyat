#include "header.h"

void enter_info(PhoneBook pb, int& number)
{
	std::string ptr;

	std::cout<<"Firstname: ";
	std::cin>>ptr;
	pb.contacts[number].setFirstName(ptr);
	std::cout<<"LastName: ";
	std::cin>>ptr;
	pb.contacts[number].setLastName(ptr);
	std::cout<<"Nickname: ";
	std::cin>>ptr;
	pb.contacts[number].setNickname(ptr);
	std::cout<<"PhoneNumber: ";
	std::cin>>ptr;
	pb.contacts[number].setPhoneNumber(ptr);
	std::cout<<"DarkestSecret: ";
	std::cin>>ptr;
	pb.contacts[number].setDarkestSecret(ptr);
}


int main()
{
	std::string input;
	std::cout<<"welcome the phonebook\n";
	PhoneBook pb;
	int number;

	number = 0;
	while(std::cin>>input && input != "EXIT")
	{
		if (input == "ADD")
		{
			if (number == 8)
				number = 0;
			enter_info(pb, number);
			number++;
		}
	}
}