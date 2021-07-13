/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:57:35 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/13 18:36:03 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include <unistd.h>


int main()
{
ISquad*  A = new Squad;
ISquad*  B = new Squad;

    ISpaceMarine* a = new AssaultTerminator;
    // ISpaceMarine* a = new AssaultTerminator;
    (void)A;
    A->push(a);
    printf("adresss %p\n", a);
    a = nullptr;
    *A = *B;
    delete a;

    delete A;
    delete B;

}