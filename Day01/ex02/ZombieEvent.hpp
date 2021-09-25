/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 18:00:08 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/25 16:15:03 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_EVENT__
#define __ZOMBIE_EVENT__

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

#endif