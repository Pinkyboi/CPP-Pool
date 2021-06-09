/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 17:07:24 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/08 17:07:25 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
}

Human::~Human()
{

}

const Brain &Human::getBrain()
{
	return(this->_Brain);
}

std::string  Human::identify(void)
{
	return(this->_Brain.identify());
}