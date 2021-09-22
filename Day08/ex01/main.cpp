/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 17:24:57 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/22 16:17:17 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int rangedRand(void)
{
    return std::rand() % 50;
}

int main()
{
    Span sp = Span(10005);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    
    // std::srand(unsigned(std::time(nullptr)));
    // std::vector<int> myVect(10000);
    // std::generate(myVect.begin(), myVect.end(), rangedRand);

    // sp.appendNumbers(myVect.begin(), myVect.end());
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}