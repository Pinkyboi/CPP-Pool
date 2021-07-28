/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 03:50:48 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/28 17:46:46 by abenaiss         ###   ########.fr       */
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
