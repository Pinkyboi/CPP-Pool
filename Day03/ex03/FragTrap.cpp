/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 16:17:46 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/26 17:22:40 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

const std::string FragTrap::_attackPool[ATTACKS_NUMBER] = 
{
	"by casting \"EXPLOSIOOON!\"",
	"by casting \"Purify\"",
	"slashing with The Power Sword ! (heyyeyaaeyaaaeyaeyaa)",
	"slashing with The Blade of Chaos",
	"launching a giant boulder",
};

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
	std::cout << "[FragTrap] Default constructor is called." << std::endl;
    this->_meleeAttackDamage = 30;
    this->_rangedAttackDamage = 20;
    this->_armorDamageReduction = 5;
	std::srand (std::time(NULL));
}

FragTrap::FragTrap(void):ClapTrap()
{
	std::cout << "[FragTrap] Default constructor is called." << std::endl;
	this->_name = "FragTrap";
    this->_meleeAttackDamage = 30;
    this->_rangedAttackDamage = 20;
    this->_armorDamageReduction = 5;
	std::srand (std::time(NULL));
}

FragTrap::FragTrap(const FragTrap &argument)
{
	std::cout << "[FragTrap] Copy constructor is called." << std::endl;
	*this = argument;
	std::srand (std::time(NULL));
}

FragTrap::~FragTrap()
{
	std::cout << "[FragTrap] Destructor constructor is called." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &argument)
{
	if (&argument == this)
		return *this;
	*this = argument;
	return *this;
}
void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if(this->_maxEnergyPoints >= 25)
	{
		this->_maxEnergyPoints -= 25;
		displayAttack(target, _attackPool[(int)(rand() % 5)], this->_specialdAttackDamage);
	}
	else
		std::cout << this->_narrator << "Unable to cast a spell, a long rest may help." << std::endl;
}