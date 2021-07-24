/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 20:49:03 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/24 03:00:57 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void):_name("Jim"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade):_name(name), _grade(grade)
{
    checkGrade(this->_grade);
}

Bureaucrat::~Bureaucrat()
{
}

std::string Bureaucrat::getName() const
{
    return this->_name;
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}
/* ************************************************************************* */

void Bureaucrat::checkGrade(int grade)
{
    if(grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if(grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::incrementGrade()
{
    this->_grade--;
    checkGrade(this->_grade);
}

void Bureaucrat::decrementGrade()
{
    this->_grade++;
    checkGrade(this->_grade);
}

void Bureaucrat::signForm(Form& formInstance)
{
    if(formInstance.getState())
        std::cout << this->_name << " cannot sign " << formInstance.getName() << ": form already signed." << std::endl;
    else
    {
        formInstance.setState(true);
        std::cout << this->_name << " signs " << formInstance.getName() << "." << std::endl;
    }
}

void Bureaucrat::executeForm(const Form& formInstance)
{
    if(!formInstance.getState())
        std::cout << this->_name << " cannot execute " << formInstance.getName() << ": form not signed yet." << std::endl;
    else
    {
        std::cout << this->_name << " execute " << formInstance.getName() << "." << std::endl;
        formInstance.action();
    }
}

/* ************************************************************************** */

Bureaucrat::GradeTooLowException::GradeTooLowException():_errorMessage("The grade is too low")
{
}


const char* Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return _errorMessage.c_str();
}

Bureaucrat::GradeTooHighException::GradeTooHighException():_errorMessage("Grade is too high")
{
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return _errorMessage.c_str();
}

/* ************************************************************************** */

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& BureaucratInstane)
{
    if(this != &BureaucratInstane)
        return *this;
    this->_name = BureaucratInstane._name;
    this->_grade = BureaucratInstane._grade;
    return *this;
}

std::ostream &operator<<(std::ostream &output, const Bureaucrat& bureaucratInstance)
{
    output << bureaucratInstance.getName();
    output << ", bureacrat of grade ";
    output << bureaucratInstance.getGrade() << "." << std::endl;
    return output;
}