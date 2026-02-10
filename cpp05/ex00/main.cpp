#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	std::cout << std::bad_alloc().what() << std::endl;
	std::cout << Bureaucrat::GradeTooHighException().what() << std::endl;
}