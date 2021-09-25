/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 16:30:13 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/25 16:17:43 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMAN_B__
#define __HUMAN_B__

#include "HumanA.hpp"

class HumanB
{
	private:
		const std::string *_weapon;
		std::string _name;
	public:
		HumanB(std::string name);
		void attack(void);
		void setWeapon(const std::string &weaponType);
		~HumanB();
};

#endif