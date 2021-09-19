/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 16:42:00 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/19 18:07:17 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASY_FIND__
#define __EASY_FIND__

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T haystack, int needle)
{
    return std::find(haystack.begin(), haystack.end(), needle);
}

#endif