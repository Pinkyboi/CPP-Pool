/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:30:04 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/04 17:30:05 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

Pony::Pony()
{
    _total_number++;
    _pony_number = _total_number;
    std::cout << "The pony number " << _pony_number << "has been created" << std::endl;
}

Pony::~Pony()
{
    std::cout << "The pony number " << _pony_number << "has been destoyed" << std::endl;
}

int Pony::_total_number = 0;