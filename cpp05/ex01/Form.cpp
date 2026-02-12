#include "Form.hpp"

Form::Form(): name("default"), grade_s(100), grade_e(100), sign(false) {}

Form::Form(std::string _name, int _grade_s, int _grade_e): name(_name), grade_e(_grade_e), grade_s(_grade_s), sign(false)
{
	if (grade_s < 1)
		throw Form::GradeTooHighException();
	if (grade_s > 150)
		throw Form::GradeTooLowException();
	if (grade_e < 1)
		throw Form::GradeTooHighException();
	if (grade_e > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &cp): name(cp.name), grade_e(cp.grade_e), grade_s(cp.grade_s), sign(cp.sign){}

Form &Form::operator=(const Form &obj)
{
	this->sign = obj.sign;
	return (*this);
}

Form::~Form() {}

const std::string Form::getName() const
{
	return (this->name);
}

int Form::getGradeE() const
{
	return (this->grade_e);
}

int Form::getGradeS() const
{
	return (this->grade_s);
}

bool Form::getSign() const
{
	return (this->sign);
}

// void Form::increment()
// {
// 	if ((this->grade - 1) < 1)
// 		throw Form::GradeTooHighException();
// 	this->grade--;
// }

// void Form::decrement()
// {
// 	if ((this->grade + 1) > 150)
// 		throw Form::GradeTooLowException();
// 	this->grade++;
// }

void Form::beSigned(const Bureaucrat &obj)
{
	if (this->sign = false)
	{
		if (obj.getGrade() <= grade_s)
			throw Form::GradeTooLowException();
		this->sign = true;
	}
}

const char* Form::GradeTooHighException::what() const throw() {
	return "Form grade is too high (below 1)!";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Form grade is too low (above 150)!";
}

std::ostream& operator<<(std::ostream& os, const Form& obj)
{
	os << obj.getName() << ", Form grade_e " << obj.getGradeE() << ", Form grade_s " << obj.getGradeS() << std::endl;
	return (os);
}