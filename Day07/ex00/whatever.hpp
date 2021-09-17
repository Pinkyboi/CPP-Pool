/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 15:45:18 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/17 17:11:00 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WHATEVER__
#define __WHATEVER__

template<typename T>
void swap(T& firstValue, T& secondValue)
{
    T tempValue;

    tempValue = firstValue;
    firstValue = secondValue;
    secondValue = tempValue;
}

template<typename T>
T min(const T& firstValue, const T& secondValue)
{
    return (firstValue < secondValue) ? firstValue : secondValue;
}

template<typename T>
T max(const T& firstValue, const T& secondValue)
{
    return (firstValue > secondValue) ? firstValue : secondValue;
}

#endif