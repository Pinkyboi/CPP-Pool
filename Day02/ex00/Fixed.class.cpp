/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 16:17:25 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/15 16:17:26 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(void):_fixePointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &argument)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = argument;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->_fixePointValue);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixePointValue = raw;
}

Fixed &Fixed::operator=(const Fixed &argument) {
	std::cout << "Assignation operator called" << std::endl;
	if (&argument == this)
		return *this;
	this->_fixePointValue = argument.getRawBits();
	return *this;
}