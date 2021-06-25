/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 17:46:40 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/06 17:46:58 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
	private:
		std::string _type;
		std::string _name;
	public:
		Zombie(void);
		Zombie(std::string name, std::string type);
		void ZombieInfos(void);
		void annouce();
		void setZombie(std::string name, std::string type);
		~Zombie(void);
};