/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:30:19 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/04 17:30:20 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheStack()
{
	Pony ponyOnTheStack;	
}

void ponyOnTheHeap()
{
	Pony *ponyOnTheHeap;

	ponyOnTheHeap = new Pony();
	delete ponyOnTheHeap;
}

int	main()
{

}