/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 21:30:57 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/24 03:04:08 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIAL_PARDON_FORM__
#define __PRESIDENTIAL_PARDON_FORM__

#include "Form.hpp"
#include <iostream>
#include <string>

/**
 * PresidentialPardonForm (Required grades: sign 25, exec 5). Action: Tells us
<target> has been pardoned by Zafod Beeblebrox.
**/
class PresidentialPardonForm : public Form
{
    private:
        static const int            _signGrade;
        static const int            _executionGrade;
        std::string                 _target;
    public:
                                    PresidentialPardonForm(void);
                                    PresidentialPardonForm(std::string target);
                                    PresidentialPardonForm(PresidentialPardonForm& presidentInstance);
                                    ~PresidentialPardonForm();
        void                        pardon(void) const; 
        virtual void                action(void) const;
        PresidentialPardonForm&     operator=(const PresidentialPardonForm& presidentInstance);
};

#endif