#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main()
{
	// std::cout << std::bad_alloc().what() << std::endl;
	// std::cout << Bureaucrat::GradeTooHighException().what() << std::endl;
	/*         constructor tests               */
	Bureaucrat boss("bossy", 1);
	Bureaucrat crook("crooky", 150);
	Intern someRandomIntern;
	AForm* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	/*         signing forms tests             */
	crook.signAForm(*rrf);
	std::cout << "=======================\n=======================" << std::endl;
	boss.signAForm(*rrf);
	std::cout << "=======================\n=======================" << std::endl;
	/*         AForm tests                     */
	boss.executeForm(*rrf);
	std::cout << "=======================\n=======================" << std::endl;
}
