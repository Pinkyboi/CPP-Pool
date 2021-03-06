/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 14:40:14 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/23 18:35:58 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>
int main()
{
    // MutantStack<int> mstack;
    // mstack.push(5);
    // mstack.push(17);
    // std::cout << mstack.top() << std::endl;
    // mstack.pop();
    // std::cout << mstack.size() << std::endl;
    // mstack.push(3);
    // mstack.push(5);
    // mstack.push(737);
    // mstack.push(0);
    // MutantStack<int>::iterator it = mstack.begin();
    // MutantStack<int>::iterator ite = mstack.end();
    // ++it;
    // --it;
    // while (it != ite)
    // {
    // std::cout << *it << std::endl;
    // ++it;
    // }
    // std::stack<int> s(mstack);
    // return 0;

    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    mstack.push(17);
    mstack.push(17);
    mstack.push(17);
    mstack.push(17);
    mstack.push(17);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    MutantStack<int> nstack;
    nstack.push(1);
    nstack.push(2);
    nstack.push(3);
    nstack.push(4);
    nstack.push(5);
    nstack.push(6);
    nstack.push(7);
    it = nstack.begin();
    ite = nstack.end();
    std::cout << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    nstack = mstack;
    it = nstack.begin();
    ite = nstack.end();
    std::cout << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }   
}