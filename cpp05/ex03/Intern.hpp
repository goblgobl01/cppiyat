#pragma once

#include <string>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern {
	public :
		Intern();
		Intern(const Intern &cp);
		Intern &operator=(const Intern &obj);
		~Intern();
		AForm *makeForm(std::string form_name, std::string _target);
		AForm* makePresidential(std::string target);
		AForm* makeRobotomy(std::string target);
		AForm* makeShrubbery(std::string target);
};
