/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 20:08:43 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/24 03:00:45 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BURECRAT_HPP__
#define __BURECRAT_HPP__

#include <iostream>
#include <string>

class Form;

#include "Form.hpp"

class Bureaucrat
{
    private:
        std::string     _name;
        int             _grade;
    public:
        class           GradeTooHighException : public std::exception
        {
            private:
                const std::string _errorMessage;
            public:
                GradeTooHighException(void);
                ~GradeTooHighException(void) throw(){};
                virtual const char *what(void) const throw();
        };
        class           GradeTooLowException : public std::exception
        {
            private:
                const std::string _errorMessage;
            public:
                GradeTooLowException(void);
                ~GradeTooLowException(void) throw(){};
                virtual const char *what(void) const throw();
        };
                        Bureaucrat(void);
                        Bureaucrat(std::string name, int grade);
                        ~Bureaucrat();
        std::string     getName(void) const;
        int             getGrade(void) const;
        void            incrementGrade(void);
        void            decrementGrade(void);
        static void     checkGrade(int grade);
        void            signForm(Form& formInstance);
        void            executeForm(const Form& formInstance);
        Bureaucrat&     operator=(const Bureaucrat& bureaucratInstane);
};
std::ostream &operator<<(std::ostream&, const Bureaucrat&);

#endif