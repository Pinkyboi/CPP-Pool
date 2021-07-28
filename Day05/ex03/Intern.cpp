/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 17:46:53 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/28 17:47:08 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

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