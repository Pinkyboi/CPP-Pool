/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 13:13:33 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/02 13:13:35 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Character.hpp"
#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"

int main()
{
    Character* zaz = new Character("zaz");
    std::cout << *zaz;
    Enemy* b = new SuperMutant();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    zaz->equip(pr);
    std::cout << *zaz;
    zaz->equip(pf);
    zaz->attack(b);
    std::cout << *zaz;
    zaz->equip(pr);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;
    zaz->recoverAP();
    zaz->recoverAP();
    zaz->recoverAP();
    zaz->recoverAP();
    zaz->recoverAP();
    zaz->recoverAP();
    zaz->recoverAP();
    zaz->recoverAP();
    zaz->attack(b);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;
    zaz->attack(b);
    // b = NULL;
    std::cout << b << std::endl;
    // std::cout << *zaz;
    zaz->attack(b);
    std::cout << b << std::endl;
    // std::cout << *zaz;
    //     zaz->attack(b);
    // std::cout << *zaz;
    return 0;
}

//TODO: more testing