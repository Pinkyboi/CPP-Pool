/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:26:40 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/01 17:26:41 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
    std::cout << "Zog zog." << std::endl;    
}

Peon::Peon(const Peon &peonInstance)
{
    std::cout << this->_name << ", ";
    std::cout << "the Peon";
    std::cout << "has been cloned." << std::endl;
    *this = peonInstance;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

Peon &Peon::operator=(const Peon &peonInstance)
{
    if(this == &peonInstance)
        return *this;
    this->_name = peonInstance._name;
    return *this;
}

void Peon::getPolymorphed() const
{
    std::cout << this->_name;
    std::cout << " has been turned into a pink pony !" << std::endl;
}
