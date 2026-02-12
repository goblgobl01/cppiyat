#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("default"), grade(150) {}

Bureaucrat::Bureaucrat(std::string _name, int _grade) : name(_name)
{
	if (_grade < 0)
		throw Bureaucrat::GradeTooHighException();
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = _grade;
}

Bureaucrat::Bureaucrat(Bureaucrat &cp): name(cp.name), grade(cp.grade) {}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &obj)
{
	this->grade = obj.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat() {}

const std::string Bureaucrat::getName()
{
	return (this->name);
}

int Bureaucrat::getGrade()
{
	return (this->grade);
}

void Bureaucrat::increment()
{
	if ((this->grade - 1) < 0)
		throw Bureaucrat::GradeTooHighException();
	this->grade++;
}

void Bureaucrat::decrement()
{
	if ((this->grade + 1) > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade--;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Bureaucrat grade is too high (below 1)!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Bureaucrat grade is too low (above 150)!";
}