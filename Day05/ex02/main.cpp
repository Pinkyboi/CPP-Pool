/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 21:48:24 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/28 19:24:41 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main () {

	ShrubberyCreationForm s("Home");
	RobotomyRequestForm r("Jerry");
	PresidentialPardonForm p("Nim");

	try {
		Bureaucrat b1("b1", 1);
		Bureaucrat b2("b2", 100);
		std::cout <<"-----------------" << std::endl;
		b1.signForm(s);
		b1.executeForm(s);
		std::cout <<"-----------------" << std::endl;
		b2.signForm(s);
		b2.executeForm(s);
		std::cout <<"-----------------" << std::endl;
		b1.signForm(r);
		b1.executeForm(r);
		std::cout <<"-----------------" << std::endl;
		b2.signForm(r);
		b2.executeForm(r);
		std::cout <<"-----------------" << std::endl;
		b1.signForm(p);
		b1.executeForm(p);
		std::cout <<"-----------------" << std::endl;
		b2.signForm(p);
		b2.executeForm(p);
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}