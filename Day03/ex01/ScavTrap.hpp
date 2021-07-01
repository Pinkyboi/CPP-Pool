/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 13:36:03 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/24 13:36:04 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "FragTrap.hpp"

#define MAX_HP 100
#define MIN_HP 0
#define CHALLENGES_NUMBER 12
#define NARRATOR "ScavTrap: "

class ScavTrap
{
	private:
		int			getMinValue(int firstNum, int secondNum) const;
		int			getMaxValue(int firstNum, int secondNum) const;
		void		displayAttack(std::string const & target, std::string attackType, int damage) const;
	protected:
		int	_hitPoints;
		int	_energyPoints;
		int	_maxHitPoints;
		int	_maxEnergyPoints;
		int	_level;
		int	_meleeAttackDamage;
		int	_rangedAttackDamage;
		int	_specialdAttackDamage;
		int	_armorDamageReduction;
		std::string	_name;
		static const std::string _challengesList[CHALLENGES_NUMBER];
	public:
		ScavTrap(std::string name);
		ScavTrap(void);
		ScavTrap(ScavTrap &argument);
		~ScavTrap();
		FragTrap	&operator=(const FragTrap &argument);
		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		challengeNewcomer(void);
};
