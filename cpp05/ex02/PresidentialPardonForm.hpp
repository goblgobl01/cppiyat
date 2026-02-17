#pragma once

#include <string>
#include "AForm.hpp"
class PresidentialPardonForm : public AForm {
	private :
		std::string target;
	public :
		PresidentialPardonForm();
		PresidentialPardonForm(std::string _target);
		PresidentialPardonForm(const PresidentialPardonForm &cp);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &obj);
		~PresidentialPardonForm();
		void performAction() const;
};
