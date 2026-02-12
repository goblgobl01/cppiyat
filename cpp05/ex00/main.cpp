#include "Bureaucrat.hpp"

int main()
{
	// std::cout << std::bad_alloc().what() << std::endl;
	// std::cout << Bureaucrat::GradeTooHighException().what() << std::endl;
	/*         constructor tests               */
	Bureaucrat a;
	Bureaucrat b("sma9lo", 1);
	Bureaucrat d("sma9lo", 150);
	try
	{
		Bureaucrat c("sma9lo", 200);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat e("spopo", 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	/*         decrement increment tests       */
	std::cout << a;
	a.increment();
	std::cout << a;
	a.decrement();
	std::cout << a;
	try
	{
		b.increment();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		d.decrement();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
