/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 11:27:59 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/17 12:14:33 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <typeinfo>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void)
{
    int classChoice = std::rand() % 3;
    if(classChoice == 0)
        return new A;
    if(classChoice == 1)
        return new B;
    return new C;
}

void identify(Base* p)
{
    if(dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    if(dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    if(dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void identify(Base& p)
{
    Base dummyCast;

    try
    {
        dummyCast = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return;
    }
    catch(std::exception){}
    try
    {
        dummyCast = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return;
    }
    catch(std::exception){}
    try
    {
        dummyCast = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        return;
    }
    catch(std::exception){}
}

int main()
{
    Base *dummyCast;
    std:srand(std::time(NULL));
    for (int i = 0; i < 10; i++)
    {
        dummyCast = generate();
        std::cout <<"---"<< typeid(*dummyCast).name()<<"---" << std::endl;
        identify(dummyCast);
        identify(*dummyCast);
        std::cout << std::endl;
    }
}