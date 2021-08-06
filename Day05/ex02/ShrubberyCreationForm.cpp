/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 20:49:59 by abenaiss          #+#    #+#             */
/*   Updated: 2021/08/06 18:47:29 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// Static variables
const std::string ShrubberyCreationForm::_ascii_tree = "\n"
"         &&& &&  & &&\n"
"      && &\\/&\\|& ()|/ @, &&\n"
"      &\\/(/&/&||/& /_/)_&/_&\n"
"   &() &\\/&|()|/&\\/ '%\" & ()\n"
"  &_\\_&&_\\ |& |&&/&__%_/_& &&\n"
"&&   && & &| &| /& & % ()& /&&\n"
" ()&_---()&\\&\\|&&-&&--%---()~\n"
"     &&     \\|||\n"
"             |||\n"
"             |||\n"
"             |||\n"
"      , -=-~  .-^- _\n";
const std::string   ShrubberyCreationForm::_path = "./";
// Constructors
ShrubberyCreationForm::ShrubberyCreationForm(void):Form("Shrubbery", 145, 137),_target("ZeTree")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& shrubberyInstance):Form("Shrubbery", 145, 137)
{
    *this = shrubberyInstance;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form("Shrubbery", 145, 137),_target(target)
{
}

// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

// operator = overload
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& shrubberyInstance)
{
    if (this == &shrubberyInstance)
        return *this;
    this->_target = shrubberyInstance._target;
    this->setState(shrubberyInstance.getState());
    return *this;
}

// Fonctions

void ShrubberyCreationForm::createTree(void) const
{
    std::ofstream out(this->_path + this->_target);
    if(!out.is_open())
        return;
    out << _ascii_tree;
    out.close();
}

void ShrubberyCreationForm::action(void) const
{
    this->createTree();
}
