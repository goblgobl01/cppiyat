#include "RobotomyRequestForm.hpp"
#include <cstdlib>

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
	std::cout << "*drilling noises*" << std::endl;
	if (std::rand() % 2)
		std::cout << target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "The robotomy failed on " << target << "." << std::endl;
}
