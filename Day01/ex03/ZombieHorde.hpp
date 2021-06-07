/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:42:53 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/07 15:42:54 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
