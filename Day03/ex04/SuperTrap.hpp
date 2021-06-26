/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 16:05:08 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/26 17:40:48 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SUPER_TRAP_HPP_
#define _SUPER_TRAP_HPP_

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
    private:
        
    public:
        SuperTrap(std::string name);
        SuperTrap(void);
        SuperTrap(SuperTrap &argument);
        ~SuperTrap();
        void        rangedAttack(std::string const & target);
		void        meleeAttack(std::string const & target);
        SuperTrap   &operator=(const SuperTrap &argument);
};

#endif