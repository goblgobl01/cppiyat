#pragma once

#include <iostream>
#include <string>
#include <exception>
class Bureaucrat {
	private :
		// const std::string	name;
		// int					grade;
	public :
		// Bureaucrat();
		// Bureaucrat(std::string _name, int _grade);
		// Bureaucrat(Bureaucrat &cp);
		// Bureaucrat &operator=(Bureaucrat &obj);
		// ~Bureaucrat();
		// std::string getName();
		// int getGrade();
		// void increment();
		// void decrement();
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
};
