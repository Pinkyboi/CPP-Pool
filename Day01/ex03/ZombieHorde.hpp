/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:42:53 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/25 16:15:47 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HORDE__
#define __ZOMBIE_HORDE__

#include "Zombie.hpp"
#define LIST_SIZE 16

class ZombieHorde
{
	private:
		Zombie*	_theHorde;
		int		_zombieNumber;
		static const std::string _nameList[LIST_SIZE];
	public:
		ZombieHorde(int zombieNumber, std::string type = "Archer");
		void	announce(void);
		~ZombieHorde();
};

#endif