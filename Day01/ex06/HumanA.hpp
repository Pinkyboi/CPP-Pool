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
		const std::string &_weapon; 
		std::string _name;
	public:
		HumanA(const std::string name, const std::string &weaponType);
		void attack(void);
		~HumanA();
};


