/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 16:30:53 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/09 16:30:55 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon &_weapon; 
		std::string _name;
	public:
		HumanA(std::string name, Weapon Weapon);
		HumanA(std::string name);
		void attack(void);
		void setWeapon(Weapon Weapon);
		~HumanA();
};


