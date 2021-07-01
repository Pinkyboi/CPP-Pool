/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:26:02 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/01 17:26:03 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"


Sorcerer::Sorcerer(std::string name, std::string title): _name(name), _title(title)
{
    std::cout << this->_name << ", ";
    std::cout << this->_title << ", ";
    std::cout << "is born !" << std::endl;
}

Sorcerer::~Sorcerer()
{
    std::cout << this->_name << ", ";
    std::cout << this->_title << ", ";
    std::cout << "is dead. Consequences will never be the same !" << std::endl;
}

std::string Sorcerer::getSorcererName(void) const
{
    return this->_name;
}

std::string Sorcerer::getSorcererTitle(void) const
{
    return this->_title;
}

void Sorcerer::polymorph(Victim const &Victim)
{
    Victim.getPolymorphed();
}

std::ostream &operator<<(std::ostream &out, const Sorcerer &Sorcerer)
{
    out << "I am ";
    out << Sorcerer.getSorcererName() << ", ";
    out << Sorcerer.getSorcererTitle() << ", ";
    out << "and I like ponies !" << std::endl;
    return out;
}
