#include <fstream>
#include <iostream>
#include <string>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout<<"error"<<std::endl;
		return (0);
	}
	if (!(*av[2]))
	{
		std::cout<<"first argument must have something"<<std::endl;
		return (0);
	}
	std::ifstream read_file(av[1]);
	if (!read_file)
	{
		std::cout<<"Error\n";
		return (0);
	}
	std::string filename = av[1];
	filename.append(".replace");
	std::ofstream write_file(filename.c_str());
	if (!write_file)
	{
		std::cout<<"Error\n";
		return (0);
	}
	std::string::size_type pos;
	std::string buffer;
	std::string string1(av[2]);
	std::string string2(av[3]);
	while(std::getline(read_file, buffer))
	{
		while ((pos = buffer.find(string1, pos)) != std::string::npos)
		{
			buffer.replace(pos, string1.size(), string2);
			pos += string2.size(); 
		}
		pos = 0;
		write_file<<buffer;
		if(!read_file.eof())
			write_file<<"\n";
	}
	read_file.close();
	write_file.close();
	return 0;
}