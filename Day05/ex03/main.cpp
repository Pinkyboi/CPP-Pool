/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 21:48:24 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/24 16:26:49 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int				main(void)
{
	Intern					joe;

	joe.makeForm("univers creation", "just here");
	Form					*form1 = joe.makeForm("shrubbery creation", "mars");
	Form					*form2 = joe.makeForm("robotomy request", "terre");
	Form					*form3 = joe.makeForm("presidential pardon", "president");
	std::cout << *form1;

	try
	{
		Bureaucrat	bob("Bob", 150);
		std::cout << bob;
		bob.signForm(*form1);
		bob.executeForm(*form1);
		std::cout << *form1;
	}
	catch (std::exception &e)
	{
		std::cout << "ERROR Bob" << std::endl;
	}

	try
	{
		Bureaucrat	jack("Jack", 140);
		std::cout << jack;
		jack.signForm(*form1);
		jack.executeForm(*form1);
		std::cout << *form1;
	}
	catch (std::exception &e)
	{
		std::cout << "ERROR Jack" << std::endl;
	}

	try
	{
		Bureaucrat	jule("President", 2);
		std::cout << jule;
		jule.executeForm(*form1);
		std::cout << *form1;

		jule.signForm(*form2);
		jule.executeForm(*form2);
		std::cout << *form2;

		jule.signForm(*form3);
		jule.executeForm(*form3);
		std::cout << *form3;
	}
	catch (std::exception &e)
	{
		std::cout << "ERROR Jule" << std::endl;
	}

	return (0);
}