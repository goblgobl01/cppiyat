#pragma once

#include <string>
#include "AForm.hpp"
class RobotomyRequestForm : public AForm {
	private :
		std::string target;
	public :
		RobotomyRequestForm();
		RobotomyRequestForm(std::string _target);
		RobotomyRequestForm(const RobotomyRequestForm &cp);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &obj);
		~RobotomyRequestForm();
		void performAction() const;
};
