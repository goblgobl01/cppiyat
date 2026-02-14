#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	// std::cout << std::bad_alloc().what() << std::endl;
	// std::cout << Bureaucrat::GradeTooHighException().what() << std::endl;
	/*         constructor tests               */
	Bureaucrat boss("bossy", 1);
	Bureaucrat crook("crooky", 150);
	Form a;
	Form b("sma9lo", 1, 1);
	Form d("sma9lo", 150, 150);
	Form e("sma9loo", 1, 1);
	Form f("sma9loo", 150, 150);
	try
	{
		Form c("sma9lo", 200, 200);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form e("spopo", 0, 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	/*         Form tests                     */
	boss.signForm(b);
	boss.signForm(d);
	crook.signForm(e);
	crook.signForm(f);
}
