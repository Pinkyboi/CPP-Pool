/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 14:40:25 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/22 17:27:34 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <deque>
#include <stack>
template <typename T>
class MutantStack : public std::deque<T>
{
    private:
        std::deque<T>              _internalContainer;
    public:
                                    MutantStack(void){};
                                    MutantStack(const MutantStack& stackInstance){*this = stackInstance;};
                                    ~MutantStack(){};
        unsigned int                size(void){return _internalContainer.size();};
        void                        push(T value){return _internalContainer.push_back(value);};
        void                        pop(void){return _internalContainer.pop_back();};
        T&                          top(void){return _internalContainer.back();};
        void                        empty(void){_internalContainer.empty();}
        typename std::deque<T>::iterator    begin(void){return _internalContainer.begin();};
        typename std::deque<T>::iterator    end(void){return _internalContainer.end();};
        MutantStack&                operator=(const MutantStack& stackInstance)
        {
            if(this == &stackInstance)
                return *this;
            std::deque<T> temp(stackInstance._internalContainer);
            std::swap(this->_internalContainer, temp);
            return *this;
        };
};

