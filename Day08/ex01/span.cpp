/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 17:25:00 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/19 22:19:56 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int size):_size(size)
{
    this->_internalContainer.reserve(size);
}

Span::Span(const Span& spanInstance)
{
    *this = spanInstance;
}

Span::~Span()
{
}

void Span::addNumber(int singleNumber)
{
    if(_internalContainer.size() == this->_size)
        throw std::exception();
    this->_internalContainer.push_back(singleNumber);
}

int Span::shortestSpan(void)
{
    if(_internalContainer.size() == 1 || _internalContainer.size() == 0)
        throw std::exception();
    int shortestSpan = std::numeric_limits<int>::max();
    std::vector<int>::iterator end = _internalContainer.end();
    for(std::vector<int>::iterator it = _internalContainer.begin(); it != end; it++)
    {
        for(std::vector<int>::iterator jt = it + 1; jt != end; jt++)
        {
            int currentSpan = std::abs(*it - *jt);
            if(currentSpan < shortestSpan)
                shortestSpan = currentSpan;

        }
    }
    return shortestSpan;
}

int Span::longestSpan(void)
{
    if(_internalContainer.size() == 1 || _internalContainer.size() == 0)
        throw std::exception();
    int longestSpan = std::numeric_limits<int>::min();
    std::vector<int>::iterator end = _internalContainer.end();
    for(std::vector<int>::iterator it = _internalContainer.begin(); it != end; it++)
    {
        for(std::vector<int>::iterator jt = it + 1; jt != end; jt++)
        {
            int currentSpan = std::abs(*it - *jt);
            if(currentSpan > longestSpan)
                longestSpan = currentSpan;

        }
    }
    return longestSpan;
}

Span& Span::operator=(const Span& spanInstance)
{
    if(this == &spanInstance)
        return *this;
    this->_size = spanInstance._size;
    this->_internalContainer.empty();
    this->_internalContainer = spanInstance._internalContainer;
    return *this;
}