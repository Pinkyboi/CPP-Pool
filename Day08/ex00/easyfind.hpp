/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 16:42:00 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/22 16:58:07 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASY_FIND__
#define __EASY_FIND__

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>
#include <memory>

template <template <typename, typename> class Container, 
          typename Value,
          typename Allocator>
typename Container<Value, Allocator>::iterator easyfind(Container<Value, Allocator> &haystack, const Value needle)
{
    return std::find(haystack.begin(), haystack.end(), needle);
}


#endif