#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("Presidential_Form", 72, 45)
{
	target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target): AForm("Presidential_Form", 72, 45)
{
	target = _target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cp): AForm(cp)
{
	this->target = cp.target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
	if (this != &obj)
	{
		AForm::operator=(obj);
		this->target = obj.target;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::performAction() const
{
	
}
