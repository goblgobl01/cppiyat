#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Shrubbery Form", 145, 137)
{
	target = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target): AForm("Shrubbery Form", 145, 137)
{
	target = _target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cp): AForm(cp)
{
	this->target = cp.target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	if (this != &obj)
	{
		AForm::operator=(obj);
		this->target = obj.target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::performAction() const
{
	std::string filename = target + "_shrubbery";
	std::ofstream ofs(filename.c_str());
	if (!ofs)
	{
		std::cerr << "Error: Could not open file " << target + "_shrubbery" << std::endl;
		return;
	}
	ofs << "       _-_" << std::endl;
	ofs << "    /~~   ~~\\" << std::endl;
	ofs << " /~~         ~~\\" << std::endl;
	ofs << "{               }" << std::endl;
	ofs << " \\  _-     -_  /" << std::endl;
	ofs << "   ~  \\\\ //  ~" << std::endl;
	ofs << "_- -   | | _- _" << std::endl;
	ofs << "  _ -  | |   -_" << std::endl;
	ofs << "      // \\\\" << std::endl;
	ofs.close();
}
