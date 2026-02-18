#include "AForm.hpp"
#include "Bureaucrat.hpp"


AForm::AForm(): name("default"), sign(false), grade_s(100), grade_e(100) {}

AForm::AForm(std::string _name, int _grade_s, int _grade_e): name(_name), sign(false), grade_s(_grade_s), grade_e(_grade_e)
{
	if (grade_s < 1)
		throw AForm::GradeTooHighException();
	if (grade_s > 150)
		throw AForm::GradeTooLowException();
	if (grade_e < 1)
		throw AForm::GradeTooHighException();
	if (grade_e > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &cp): name(cp.name), sign(cp.sign), grade_s(cp.grade_s), grade_e(cp.grade_e) {}

AForm &AForm::operator=(const AForm &obj)
{
	this->sign = obj.sign;
	return (*this);
}

AForm::~AForm() {}

const std::string AForm::getName() const
{
	return (this->name);
}

int AForm::getGradeE() const
{
	return (this->grade_e);
}

int AForm::getGradeS() const
{
	return (this->grade_s);
}

bool AForm::getSign() const
{
	return (this->sign);
}

void AForm::beSigned(const Bureaucrat &obj)
{
	if (this->sign == false)
	{
		if (obj.getGrade() > grade_s)
			throw AForm::GradeTooLowException();
		this->sign = true;
	}
}

const char* AForm::GradeTooHighException::what() const throw() {
	return "AForm grade is too high (below 1)!";
}

const char* AForm::GradeTooLowException::what() const throw() {
	return "AForm grade is too low (above 150)!";
}

std::ostream& operator<<(std::ostream& os, const AForm& obj)
{
	os << obj.getName() << ", AForm grade_e " << obj.getGradeE() << ", AForm grade_s " << obj.getGradeS() << std::endl;
	return (os);
}