/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 03:50:48 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/24 16:25:15 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include <iostream>
#include <string>
/*
    makeForm two strings in parameter, the first is the form type the second is the target, returna  Form pointer
*/
class Intern : public Form
{
    private:
        
    public:
        Intern(void);
        Intern(const Intern &internInstance);
        ~Intern();
        Form*   makeForm(const std::string &formType, const std::string &target);
        Intern& operator=(const Intern &internInstance);
};

Intern::Intern(void)
{
}

Intern::Intern(const Intern& internInstance)
{
    *this = internInstance;  
}

Intern& Intern::operator=(const Intern& internInstance)
{
    (void)internInstance;
    return *this;
}

Intern::~Intern()
{
}

/**
 * the different type of form are : 
 * robotomy request
 * shrybbery creation
 * presidential pardon
**/

Form* Intern::makeForm(const std::string &formType, const std::string &target)
{
    Form *form;

    if (formType == "robotomy request")
        form = new RobotomyRequestForm(target);
    else if (formType == "presidential pardon")
        form = new PresidentialPardonForm(target);
    else if (formType == "shrubbery creation")
        form = new ShrubberyCreationForm(target);
    else
    {
        std::cout << "error : invalid form type." << std::endl;
        return nullptr;
    }
    std::cout << "Intern creates " << *form << std::endl;
    return form;
}