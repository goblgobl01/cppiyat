#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("Presidential_Form", 25, 5)
{
	target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target): AForm("Presidential_Form", 25, 5)
{
	target = _target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cp): AForm(cp)
{
	this->target = cp.target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
	if (this != &obj)
	{
		AForm::operator=(obj);
		this->target = obj.target;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::performAction() const
{
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
