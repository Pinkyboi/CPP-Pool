/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 14:40:25 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/25 13:25:08 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANT_STACK__ 
#define __MUTANT_STACK__ 

#include <stack>
template <typename T>

class MutantStack : public std::stack<T>
{
    public :
        typedef typename std::stack<T>::container_type  container_t;
        typedef typename container_t::iterator       iterator;
    public:
                        MutantStack(void){};
                        MutantStack(const MutantStack& stackInstance){*this = stackInstance;};
                        ~MutantStack(){};
        iterator        begin(void){return this->c.begin();};
        iterator        end(void){return this->c.end();};
        MutantStack&    operator=(const MutantStack& stackInstance)
        {
            if(this == &stackInstance)
                return *this;
            container_t temp(stackInstance.c);
            std::swap(std::stack<T>::c, temp);
            return *this;
        };
};

#endif