/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 17:25:00 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/19 18:25:13 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

template<typename T>
Span<T>::Span(T& containerFiller):_internalContainer(containerFiller)
{
}

template<typename T>
Span<T>::~Span()
{
}

template<typename T>
void Span<T>::addNumber(int singleNumber) throw()
{
    if(std::find(_internalContainer.begin(), _internalContainer.end(), item) != _internalContainer.end())
        throw std::exception();
    this->_internalContainer.push_back(singleNumber);
}

template<typename T>
int Span<T>::shortestSpan(void)
{
    if(_internalContainer.size() == 1 || _internalContainer.size() == 1)
        return std::exception();
    int shortestSpan = std::numeric_limits<int>::max();
    typename T::iterator end = _internalContainer.end();
    for(typename T::iterator it = _internalContainer.begin(); it != end; it++)
    {
        for(typename T::iterator jt = it; jt != end; jt++)
        {
            int currentSpan = std::abs(*it - *jt);
            if(currentSpan < shortestSpan)
                shortestSpan = currentSpan;

        }
    }
}

template<typename T>
int Span<T>::shortestSpan(void)
{
    if(_internalContainer.size() == 1 || _internalContainer.size() == 1)
        return std::exception();
    int shortestSpan = std::numeric_limits<int>::min();
    typename T::iterator end = _internalContainer.end();
    for(typename T::iterator it = _internalContainer.begin(); it != end; it++)
    {
        for(typename T::iterator jt = it; jt != end; jt++)
        {
            int currentSpan = std::abs(*it - *jt);
            if(currentSpan > shortestSpan)
                shortestSpan = currentSpan;

        }
    }
}