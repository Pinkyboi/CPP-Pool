/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 17:23:06 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/17 18:04:40 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER__
#define __ITER__

#include <iostream>

template<typename T>
void iter(const T* adress, int lenght, std::function<void (const T& x )> func)
{
    for(int i = 0; i < lenght; i++)
        func(adress[i]);
}

#endif