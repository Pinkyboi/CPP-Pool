/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 15:12:30 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/18 13:29:41 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "whatever.hpp"
#include <iostream>

template<typename T>
class DummyClass
{
    private:
        DummyClass(void){};
    public:
        T     _innerValue;
        DummyClass<T>(const T& value): _innerValue(value){};
        ~DummyClass(){};
        bool operator>(const DummyClass& secondClass){ return _innerValue > secondClass._innerValue;};
        bool operator<(const DummyClass& secondClass){ return _innerValue < secondClass._innerValue;};
};

int main()
{
    DummyClass<int> dummy1(12);
    DummyClass<int> dummy2(13);
    DummyClass<int> clasa = max<DummyClass<int>&>(dummy1, dummy2);
    std::cout << clasa._innerValue << std::endl;

    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}