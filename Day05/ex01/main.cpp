/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 21:48:24 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/23 03:31:48 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int				main(void)
{
	Form		form("Form 42C", 21, 21);
	std::cout << form;

	try
	{
		Bureaucrat	bob("Bob", 42);
		std::cout << bob;
		bob.signForm(form);
		std::cout << form;
	}
	catch (std::exception &e)
	{
		std::cout << "ERROR Bob" << std::endl;
	}

	try
	{
		Bureaucrat	jule("Jule", 2);
		std::cout << jule;
		jule.signForm(form);
		std::cout << form;
	}
	catch (std::exception &e)
	{
		std::cout << "ERROR Jule" << std::endl;
	}

	return (0);
}