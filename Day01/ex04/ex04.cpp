/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 18:58:36 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/07 18:58:37 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string message = "HI THIS IS BRAIN";
	std::string &referenceMessage = message;
	std::string *pointerMessage;

	pointerMessage = &message;
	std::cout << pointerMessage << std::endl;
	std::cout << &referenceMessage << std::endl;
}