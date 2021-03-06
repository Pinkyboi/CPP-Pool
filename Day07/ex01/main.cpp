/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 17:23:16 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/18 13:10:46 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <functional>

#include "iter.hpp"

class Awesome {

    public:
    Awesome( void ) : _n( 1337 ) { return; }
    int get( void ) const { return this->_n; }

    private:
    int _n;
};


std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print(const T& x) { std::cout << x << std::endl; return; }



int main()
{
    int tab[] = { 0, 1, 2, 3, 4 };
    Awesome tab2[5];

    iter( tab, 5, print);
    iter( tab2, 5, print);

    return 0;
}