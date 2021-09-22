/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 14:40:25 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/22 18:47:02 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <deque>
#include <stack>
template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
                                            MutantStack(void){};
                                            MutantStack(const MutantStack& stackInstance){*this = stackInstance;};
                                            ~MutantStack(){};
        typename std::deque<T>::iterator    begin(void){return std::stack<T>::c.begin();};
        typename std::deque<T>::iterator    end(void){return std::stack<T>::c.end();};
        MutantStack&                        operator=(const MutantStack& stackInstance)
        {
            if(this == &stackInstance)
                return *this;
            typename std::stack<T>::container_type temp(stackInstance.c);
            std::swap(std::stack<T>::c, temp);
            return *this;
        };
};

