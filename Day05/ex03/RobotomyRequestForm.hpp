/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 20:55:18 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/24 03:02:51 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMYREQUESTFORM__
#define __ROBOTOMYREQUESTFORM__

#include "Form.hpp"
#include <iostream>
#include <string>

class RobotomyRequestForm : public Form
{
    private:
        std::string                 _target;              
    public:
                                    RobotomyRequestForm(void);
                                    RobotomyRequestForm(const RobotomyRequestForm &robotInstance);
                                    RobotomyRequestForm(std::string target);
                                    ~RobotomyRequestForm();
        void                        robotomize(void) const;
        virtual void                action(void) const;
        RobotomyRequestForm&        operator=(const RobotomyRequestForm &robotInstance);
};

#endif