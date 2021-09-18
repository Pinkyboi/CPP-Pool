/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 17:23:06 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/18 13:16:38 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER__
#define __ITER__

#include <iostream>

template<typename T>
void iter(const T* address, int lenght, void (*function)(const T&))
{
    if (!address)
        return ;
    for(int i = 0; i < lenght; i++)
        function(address[i]);
}

#endif