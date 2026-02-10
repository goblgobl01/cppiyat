#include "Bureaucrat.hpp"

// Bureaucrat::Bureaucrat(): name("default"), grade(150) {}

// Bureaucrat::Bureaucrat(std::string _name, int _grade) : name(_name)
// {
// 	if (_grade < 0)
// 		throw 
// }

// Bureaucrat::Bureaucrat(Bureaucrat &cp)
// {

// }

// Bureaucrat &Bureaucrat::operator=(Bureaucrat &obj)
// {

// }

// Bureaucrat::~Bureaucrat()
// {

// }

// std::string Bureaucrat::getName()
// {

// }

// int Bureaucrat::getGrade()
// {

// }

// void Bureaucrat::increment()
// {

// }

// void Bureaucrat::decrement()
// {

// }

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Bureaucrat grade is too high (below 1)!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Bureaucrat grade is too low (above 150)!";
}