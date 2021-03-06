/*=============================================================================
 * Project: No, you need form 28B, not 28C...
 *
 * Program: Creates a FR4G-TP assault robot class for game
 *
 * Author: Tony Hendrick
 * ==========================================================================*/

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "Form.class.hpp"
#include "Bureaucrat.class.hpp"

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	~ShrubberyCreationForm(void);

	ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);

	void execute(Bureaucrat const & executor) const;
private:
	ShrubberyCreationForm(void);
	
	static const int _sign;
	static const int _execute;
};

#endif