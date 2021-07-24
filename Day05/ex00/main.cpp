/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 21:48:24 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/22 21:49:34 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main () {

	// Bureaucrat bureaucrat_undef;
	// Bureaucrat bureaucrat_copy(bureaucrat_undef);

	// std::cout << bureaucrat_undef;
	// std::cout << bureaucrat_copy;
	try {
		Bureaucrat bureaucrat_def("Kolia", 5);
		for (int i = 0; i < 100; i++){
			std::cout << bureaucrat_def;
			bureaucrat_def.incrementGrade();
		}
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}