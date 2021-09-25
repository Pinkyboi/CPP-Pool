/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 16:30:53 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/25 16:17:02 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMAN_A__
#define __HUMAN_A__

#include "Weapon.hpp"

class HumanA
{
	private:
		const std::string &_weapon; 
		std::string _name;
	public:
		HumanA(const std::string name, const std::string &weaponType);
		void attack(void);
		~HumanA();
};

#endif