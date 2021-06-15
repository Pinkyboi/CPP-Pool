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

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixePointValue = 0;
}

Fixed::Fixed(const Fixed &argument)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixePointValue = argument._fixePointValue;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int convertToBits(int number)
{
	std::string bitSet = "0000";
	
	int index = bitSet.size() - 1;
	if (number < 0)
		bitSet.replace(0, 1, "1");
	number = abs(number);
	while (number)
	{
		bitSet[index] = (number % 2) + '0';
		number /=2;
		index--;
	}
	return(atoi(bitSet.c_str()));
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	
	return(convertToBits(this->_fixePointValue));
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	if(!(std::abs(raw) > 7))
		this->_fixePointValue = raw;
	else
		std::cout << "The value exceed the storage limit" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &argument) {
	std::cout << "Assignation operator called" << std::endl;
	if (&argument == this)
		return *this;
	this->_fixePointValue = argument._fixePointValue;
	return *this;
}