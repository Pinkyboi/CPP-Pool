/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 17:07:11 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/08 17:07:12 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain(short IQ)
{
	this->_IQ = IQ;
	std::cout << "A brain as been created :";
	std::cout << " his IQ is " << (int)IQ << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "A brain has been destroyed.";
}

std::string Brain::identify(void) const
{
	std::stringstream stringAddress;

	stringAddress << this;
	return(stringAddress.str());
}
