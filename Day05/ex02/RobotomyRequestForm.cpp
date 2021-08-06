/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 21:22:22 by abenaiss          #+#    #+#             */
/*   Updated: 2021/08/06 18:45:41 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void):Form("Robotomize", 72, 45),_target("Dripping nose")
{
    std::srand(std::time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):Form("Robotomize", 72, 45),_target(target)
{
    std::srand(std::time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robotInstance):Form("Robotomize", 72, 45)
{
    std::srand(std::time(NULL));
    *this = robotInstance;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &robotInstance)
{
    if (this == &robotInstance)
        return *this;
    this->_target = robotInstance._target;
    this->setState(robotInstance.getState());
    return *this;
}

void RobotomyRequestForm::robotomize(void) const
{
    if(std::rand() % 2 == 0)
        std::cout << this->_target << " has been robotomized successfully." << std::endl;
    else
        std::cout << "Robotomization failed." << std::endl;
}

void RobotomyRequestForm::action(void) const
{
    this->robotomize();
}