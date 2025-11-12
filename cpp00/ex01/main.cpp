#include "header.h"

void add_contact(int &number, PhoneBook &pb)
{
	std::string ptr;

	first:
		std::cout<<"Firstname: ";
		std::getline(std::cin, ptr);
		if(ptr.empty())
		{
			if (std::cin.eof())
				std::cout<<"\n";
			freopen("/dev/tty", "r", stdin);
			std::cin.clear();
			goto first;
		}
	pb.contacts[number].setFirstName(ptr);
	second:
		std::cout<<"Last name: ";
		std::getline(std::cin, ptr);
		if(ptr.empty())
		{
			if (std::cin.eof())
				std::cout<<"\n";
			freopen("/dev/tty", "r", stdin);
			std::cin.clear();
			goto second;
		}
	pb.contacts[number].setLastName(ptr);
	third:
		std::cout<<"Nickname: ";
		std::getline(std::cin, ptr);
		if(ptr.empty())
		{
			if (std::cin.eof())
				std::cout<<"\n";
			freopen("/dev/tty", "r", stdin);
			std::cin.clear();
			goto third;
		}
	pb.contacts[number].setNickname(ptr);
	fourth:
		std::cout<<"Phone number: ";
		std::getline(std::cin, ptr);
		if(ptr.empty())
		{
			if (std::cin.eof())
				std::cout<<"\n";
			freopen("/dev/tty", "r", stdin);
			std::cin.clear();
			goto fourth;
		}
	pb.contacts[number].setPhoneNumber(ptr);
	fifth:
		std::cout<<"Darkest secret: ";
		std::getline(std::cin, ptr);
		if(ptr.empty())
		{
			if (std::cin.eof())
				std::cout<<"\n";
			freopen("/dev/tty", "r", stdin);
			std::cin.clear();
			goto fifth;
		}
	pb.contacts[number].setDarkestSecret(ptr);
}

void print_contact(int &i, PhoneBook &pb)
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
	std::cout<<"\n";
}

int main()
{
	std::string input;
	std::cout<<"welcome the phonebook\n";
	PhoneBook pb;
	int number;
	std::string ptr;


	number = 0;
	while(true)
	{
		runout:
			std::cout<<"input a command: ";
			std::getline(std::cin, input);
			if(std::cin.eof())
			{
				freopen("/dev/tty", "r", stdin);
				std::cout<<"\n";
				std::cin.clear();
				goto runout;
			}
		if (input == "EXIT")
			break ;
		if (input == "ADD")
		{
			if (number == 8)
				number = 0;
			add_contact(number, pb);
			number++;
		}
		else if (input == "SEARCH")
		{
			int i = 0;
			while(i < number)
			{
				print_contact(i, pb);
				i++;
			}
			int index;
			start:
				std::cout<<"Enter index: ";
				std::getline(std::cin, ptr);
			if(ptr.empty())
			{
				if (std::cin.eof())
					std::cout<<"\n";
				freopen("/dev/tty", "r", stdin);
				std::cin.clear();
				goto start;
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
				std::cout<<"First name: ";
				ptr = pb.contacts[index].getFirstName();
				std::cout<<ptr;
				std::cout<<"\n";
				std::cout<<"Last name: ";
				ptr = pb.contacts[index].getLastName();
				std::cout<<ptr;
				std::cout<<"\n";
				std::cout<<"Nickname: ";
				ptr = pb.contacts[index].getNickname();
				std::cout<<ptr;
				std::cout<<"\n";
				std::cout<<"Phone number: ";
				ptr = pb.contacts[index].getPhoneNumber();
				std::cout<<ptr;
				std::cout<<"\n";
				std::cout<<"Darkest secret: ";
				ptr = pb.contacts[index].getDarkestSecret();
				std::cout<<ptr;
				std::cout<<"\n";
			}
		}
	}
}