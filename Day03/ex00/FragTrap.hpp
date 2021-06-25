/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 16:17:53 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/23 16:17:54 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define MAX_HP 100
#define MIN_HP 0
#define ATTACKS_NUMBER 5
#define NARRATOR "DUNGEON MASTER: "

class FragTrap
{
	private:
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
		static const std::string _attackPool[ATTACKS_NUMBER];
		int			getMinValue(int firstNum, int secondNum) const;
		int			getMaxValue(int firstNum, int secondNum) const;
		void		displayAttack(std::string const & target, std::string attackType, int damage) const;
	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap &argument);
		FragTrap(void);
		~FragTrap();
		FragTrap	&operator=(const FragTrap &argument);
		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		vaulthunter_dot_exe(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};