/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 21:48:24 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/24 03:09:48 by abenaiss         ###   ########.fr       */
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
		s.beSigned(b1);
		s.execute(b1);
		std::cout <<"-----------------" << std::endl;
		s.beSigned(b2);
		s.execute(b2);
		std::cout <<"-----------------" << std::endl;
		r.beSigned(b1);
		r.execute(b1);
		std::cout <<"-----------------" << std::endl;
		r.beSigned(b2);
		r.execute(b2);
		std::cout <<"-----------------" << std::endl;
		p.beSigned(b1);
		p.execute(b1);
		std::cout <<"-----------------" << std::endl;
		p.beSigned(b2);
		p.execute(b2);


		
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}