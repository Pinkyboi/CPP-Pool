/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 18:00:08 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/06 18:00:09 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#define LIST_SIZE 16

class ZombieEvent
{
	private:
		std::string _type;
		static const std::string _nameList[LIST_SIZE];
	public:
		ZombieEvent(void);
		void	setZombieType(std::string type);
		Zombie	*randomChump(void);
		~ZombieEvent(void);
};
