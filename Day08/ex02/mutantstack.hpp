/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 14:40:25 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/23 16:00:15 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
template <typename T>
class MutantStack : public std::stack<T>
{
    public :
        typedef typename std::stack<T>::container_type  container_type;
        typedef typename container_type::iterator       iterator;
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
            container_type temp(stackInstance.c);
            std::swap(std::stack<T>::c, temp);
            return *this;
        };
};

