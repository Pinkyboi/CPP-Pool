/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 16:42:06 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/21 14:17:40 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
int main( void ) {

    int     myInts[] = {3, 4, 5, 6};

    std::vector<int> first(myInts, myInts + sizeof(myInts) / sizeof(int));

    if (easyfind(first, 6) != first.end())
        std::cout << "l9itha f vector\n";
    
    std::list<int> second(myInts, myInts + sizeof(myInts) / sizeof(int));

    if (easyfind(second, 0) != second.end())
        std::cout << "l9itha f list\n";

    std::deque<int> third(myInts, myInts + sizeof(myInts) / sizeof(int));

    if (easyfind(third, 4) != third.end())
        std::cout << "l9itha f deque\n";
}