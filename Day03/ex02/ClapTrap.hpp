/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 10:50:56 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/25 10:50:57 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLAP_TRAP_HPP_
#define _CLAP_TRAP_HPP_

#include <iostream>

#define MAX_HP 100
#define MIN_HP 0
#define NARRATOR "DUNGEON MASTER: "

class ClapTrap
{
    private:
		int			getMinValue(int firstNum, int secondNum) const;
		int			getMaxValue(int firstNum, int secondNum) const;
    protected:
        int         _hitPoints;
		int         _energyPoints;
		int         _maxHitPoints;
		int         _maxEnergyPoints;
		int         _level;
		int         _meleeAttackDamage;
		int         _rangedAttackDamage;
		int         _specialdAttackDamage;
		int         _armorDamageReduction;
		std::string	_name;
		std::string	_narrator;
        void		displayAttack(std::string const & target,
                        std::string attackType, int damage) const;
    public:
        ClapTrap(std::string name);
		ClapTrap(const ClapTrap &argument);
        ClapTrap(void);
        ~ClapTrap();
        void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
        ClapTrap	&operator=(const ClapTrap &argument);
};

#endif