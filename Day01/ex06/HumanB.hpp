/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 16:30:13 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/09 16:30:15 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

class HumanB
{
	private:
		Weapon &_weapon;
		std::string _name;
	public:
		HumanB(std::string name, Weapon Weapon);
		HumanB(std::string name);
		void attack(void);
		void setWeapon(Weapon Weapon);
		~HumanB();
};