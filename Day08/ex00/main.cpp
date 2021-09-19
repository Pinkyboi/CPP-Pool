/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 16:42:06 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/19 17:21:59 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> container;

    container.push_back(10);
    container.push_back(0);
    container.push_back(20);
    container.push_back(30);
    container.push_back(40);
    container.push_back(50);
    container.push_back(60);
    container.push_back(70);
    container.push_back(80);
    container.push_back(90);
    container.push_back(100);

    std::cout<< *easyfind<std::vector<int> >(container, 0) << std::endl;
    
}