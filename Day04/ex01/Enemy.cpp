/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 13:11:04 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/02 13:11:18 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void)
{
}

Enemy::~Enemy()
{
}

Enemy::Enemy(int hp, const std::string &type)
{
    this->_hp = hp;
    this->_type = type;
}

Enemy::Enemy(const Enemy &enemyInstance)
{
    std::cout << "A \"" + enemyInstance._type + "\" clone has been created !" << std::endl;
    *this = enemyInstance;
}

std::string Enemy::getType(void) const
{
    return this->_type;
}

int Enemy::getHP(void) const
{
    return this->_hp;
}

void Enemy::setType(std::string type)
{
    this->_type = type;
}

void Enemy::setHP(unsigned int hp)
{
    this->_hp = hp;
}

Enemy& Enemy::operator=(const Enemy &enemyInstance)
{
    if(this == &enemyInstance)
        return *this;
    this->_hp = enemyInstance._hp;
    this->_type = enemyInstance._type;
    return *this;
}