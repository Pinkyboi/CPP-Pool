/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 00:40:09 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/28 18:32:12 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_HPP__
#define __FORM_HPP__

class Bureaucrat;


#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Form
{
    private:
        std::string     _name;
        bool            _isSigned;
        int             _requiredGradeToSign;
        int             _requiredGradeToExecute;
    public:
        class           NotSignedException : public std::exception
        {
            private:
                const std::string _errorMessage;
            public:
                NotSignedException(void);
                ~NotSignedException(void) throw(){};
                virtual const char *what(void) const throw();
        };
        class           AlreadySignedException : public std::exception
        {
            private:
                const std::string _errorMessage;
            public:
                AlreadySignedException(void);
                ~AlreadySignedException(void) throw(){};
                virtual const char *what(void) const throw();
        };
                        Form(void);
                        Form(std::string name, int requiredGradeToSign, int requiredGradeToExecute);
        void            beSigned(Bureaucrat& bureaucratInstance);
        void            execute(Bureaucrat& bureaucratInstance) const;
        virtual void    action(void) const;
        std::string     getName(void) const;
        bool            getState(void) const;
        int             getRequiredGradeToSign(void) const;
        int             getRequiredGradeToExecute(void) const;
        void            setState(bool state);
        Form&           operator=(const Form& formInstance);
        ~Form();
};

std::ostream& operator<<(std::ostream& output, const Form& formInstance);

#endif