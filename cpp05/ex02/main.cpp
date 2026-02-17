#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	// std::cout << std::bad_alloc().what() << std::endl;
	// std::cout << Bureaucrat::GradeTooHighException().what() << std::endl;
	/*         constructor tests               */
	Bureaucrat boss("bossy", 1);
	Bureaucrat crook("crooky", 150);
	PresidentialPardonForm a("1");
	ShrubberyCreationForm b("2");
	RobotomyRequestForm c("3");
	// /*         AForm tests                     */
	boss.executeForm(a);
	std::cout << "=======================\n=======================" << std::endl;
	boss.executeForm(b);
	std::cout << "=======================\n=======================" << std::endl;
	boss.executeForm(c);
	std::cout << "=======================\n=======================" << std::endl;
	crook.executeForm(a);
	std::cout << "=======================\n=======================" << std::endl;
	crook.executeForm(b);
	std::cout << "=======================\n=======================" << std::endl;
	crook.executeForm(c);
}
