/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 01:52:50 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/24 03:03:51 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void):Form("President pardon", 25, 5),_target("Jim")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):Form("President pardon", 25, 5),_target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& presidentInstance)
{
    *this = presidentInstance;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& presidentInstance)
{
    if (this == &presidentInstance)
        return *this;
    this->_target = presidentInstance._target;
    return *this;
}

void PresidentialPardonForm::pardon(void) const
{
    std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

void PresidentialPardonForm::action(void) const
{
    this->pardon();
}
