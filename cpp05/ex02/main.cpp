#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main()
{
	// std::cout << std::bad_alloc().what() << std::endl;
	// std::cout << Bureaucrat::GradeTooHighException().what() << std::endl;
	/*         constructor tests               */
	Bureaucrat boss("bossy", 1);
	Bureaucrat crook("crooky", 150);
	AForm a;
	AForm b("sma9lo", 1, 1);
	AForm d("sma9lo", 150, 150);
	AForm e("sma9loo", 1, 1);
	AForm f("sma9loo", 150, 150);
	try
	{
		AForm c("sma9lo", 200, 200);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		AForm e("spopo", 0, 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	/*         AForm tests                     */
	boss.signAForm(b);
	boss.signAForm(d);
	crook.signAForm(e);
	crook.signAForm(f);
}
