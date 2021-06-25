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

#define CHALLENGES_NUMBER 12

class ScavTrap : public FragTrap
{
	private:
		static const std::string _challengesList[CHALLENGES_NUMBER];
	public:
		ScavTrap(std::string name);
		ScavTrap(void);
		ScavTrap(ScavTrap &argument);
		void challengeNewcomer(void);
		~ScavTrap();
};
