/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:30:04 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/25 15:17:27 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int Pony::_total_number = 0;

Pony::Pony()
{
    _total_number++;
    this->_pony_number = _total_number;
    std::cout << "The pony number " << this->_pony_number << "has been created" << std::endl;
}

Pony::~Pony()
{
    std::cout << "The pony number " << this->_pony_number << "has been destoyed" << std::endl;
}
