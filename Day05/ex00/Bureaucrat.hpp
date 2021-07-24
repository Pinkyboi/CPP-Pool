/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 20:08:43 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/23 00:22:13 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BURECRAT_HPP__
#define __BURECRAT_HPP__

#include <iostream>
#include <string>

class Bureaucrat
{
    private:
        std::string     _name;
        int             _grade;
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
    public:
                        Bureaucrat(void);
                        Bureaucrat(std::string name, int grade);
                        ~Bureaucrat();
        std::string     getName(void) const;
        int             getGrade(void) const;
        void            incrementGrade(void);
        void            decrementGrade(void);
        void            checkGrade(int grade) const;
        Bureaucrat&     operator=(const Bureaucrat& bureaucratInstane);
};
std::ostream &operator<<(std::ostream&, const Bureaucrat&);

#endif