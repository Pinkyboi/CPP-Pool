/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 01:21:17 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/24 16:35:29 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void):_name("random form"), _isSigned(false), _requiredGradeToSign(150), _requiredGradeToExecute(150)
{
}

Form::Form(std::string name, int requiredGradeToSign, int requiredGradeToExecute):_name(name), _isSigned(false), _requiredGradeToSign(requiredGradeToSign), _requiredGradeToExecute(requiredGradeToExecute)
{
    Bureaucrat::checkGrade(_requiredGradeToSign);
    Bureaucrat::checkGrade(_requiredGradeToExecute);
}

Form::~Form()
{
}

void Form::beSigned(Bureaucrat& bureaucratInstance)
{
    if(bureaucratInstance.getGrade() >= this->_requiredGradeToSign)
        throw Bureaucrat::GradeTooLowException();
    bureaucratInstance.signForm(*this);
}

void Form::execute(Bureaucrat& bureaucratInstance) const
{
    if(bureaucratInstance.getGrade() >= this->_requiredGradeToExecute)
        throw Bureaucrat::GradeTooLowException();
    bureaucratInstance.executeForm(*this);
}

void Form::action(void) const
{
    std::cout << "This form is useless." << std::endl;
}

std::string Form::getName(void) const
{
    return (this->_name);
}

bool Form::getState(void) const
{
    return (this->_isSigned);
}

int Form::getRequiredGradeToSign(void) const
{
    return (this->_requiredGradeToSign);
}

int Form::getRequiredGradeToExecute(void) const
{
    return (this->_requiredGradeToExecute);
}

void Form::setState(bool state)
{
    this->_isSigned = state;
}

Form& Form::operator=(const Form& formInstance)
{
    if(this == &formInstance)
        return (*this);
    this->_name = formInstance._name;
    this->_isSigned = formInstance._isSigned;
    this->_requiredGradeToSign = formInstance._requiredGradeToSign;
    this->_requiredGradeToExecute = formInstance._requiredGradeToExecute;
    return (*this);
}

std::ostream& operator<<(std::ostream& output, const Form& formInstance)
{
    output << "The form : " + formInstance.getName();
    output << ", " ;
    output << (formInstance.getState() ? "signed" : "not signed");
    output << " and requires a grade of " + std::to_string(formInstance.getRequiredGradeToSign()) + " to sign";
    output << " and a grade of " + std::to_string(formInstance.getRequiredGradeToExecute()) + " to be executed." << std::endl;
    return output;
}