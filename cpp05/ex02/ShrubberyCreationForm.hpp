#pragma once

#include <string>
#include "AForm.hpp"
class ShrubberyCreationForm : public AForm {
	private :
		std::string target;
	public :
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string _target);
		ShrubberyCreationForm(const ShrubberyCreationForm &cp);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &obj);
		~ShrubberyCreationForm();
		void performAction() const;
};
