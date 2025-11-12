#include "header.h"

int main()
{
	std::string input;
	std::cout<<"welcome the phonebook\n";
	PhoneBook pb;
	int number;
	std::string ptr;


	number = 0;
	while(std::cout<<"input a command: " && std::cin>>input && input != "EXIT")
	{
		if (input == "ADD")
		{
			if (number == 8)
				number = 0;
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
			number++;
		}
		else if (input == "SEARCH")
		{
			int i;

			i = 0;
			while(i < number)
			{
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
				std::cout<<"\n";
				i++;
			}
			std::cout<<"Enter index: ";
			std::cin>>ptr;
			int index;
			if (ptr.empty())
			{
				std::cout << "No input provided\n";
				continue;
			}
			try
			{
				index = std::stoi(ptr);
			}
			catch (const std::invalid_argument &)
			{
				std::cout<<"invalid_arguments\n";
				continue ;
			}
			if (index >= number || index < 0)
			{
				std::cout<<"out of range\n";
				continue ;
			}
			else
			{
				std::cout<<"Firstname: ";
				ptr = pb.contacts[index].getFirstName();
				std::cout<<ptr;
				std::cout<<"\n";
				ptr = pb.contacts[index].getLastName();
				std::cout<<ptr;
				std::cout<<"\n";
				ptr = pb.contacts[index].getNickname();
				std::cout<<ptr;
				std::cout<<"\n";
				ptr = pb.contacts[index].getPhoneNumber();
				std::cout<<ptr;
				std::cout<<"\n";
				ptr = pb.contacts[index].getDarkestSecret();
				std::cout<<ptr;
				std::cout<<"\n";
			}
		}
	}
}