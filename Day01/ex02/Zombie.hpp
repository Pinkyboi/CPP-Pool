/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 17:46:40 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/25 16:14:38 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE__
#define __ZOMBIE__

#include <iostream>

class Zombie
{
	private:
		std::string _type;
		std::string _name;
	public:
		Zombie(std::string name, std::string type);
		void ZombieInfos(void);
		void annouce();
		~Zombie(void);
};

#endif