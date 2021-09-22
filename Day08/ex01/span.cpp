/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 17:25:00 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/22 18:41:57 by abenaiss         ###   ########.fr       */
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
        throw std::out_of_range("Maximum size already reached");
    this->_internalContainer.push_back(singleNumber);
}

void Span::appendNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    int count = std::distance(begin, end);
    if(count + this->_internalContainer.size() <= this->_size)
        this->_internalContainer.insert(this->_internalContainer.begin(), begin, end);
    else
        throw std::out_of_range("Not enough space");
}

int Span::shortestSpan(void)
{
    if(_internalContainer.size() == 1 || _internalContainer.size() == 0)
        throw std::exception();
    int shortestSpan = std::numeric_limits<int>::max();
    std::vector<int>::iterator end = _internalContainer.end();
    std::sort(this->_internalContainer.begin(),end);
    for(std::vector<int>::iterator it = this->_internalContainer.begin(); it != end; it++)
    {
        if(it + 1 != end){
            int currentSpan = std::abs(*it - *(it + 1));
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
    int max = *std::max_element(this->_internalContainer.begin(), this->_internalContainer.end());
    int min = *std::min_element(this->_internalContainer.begin(), this->_internalContainer.end());
    return max - min;
}

Span& Span::operator=(const Span& spanInstance)
{
    if(this == &spanInstance)
        return *this;
    this->_size = spanInstance._size;
    std::vector<int> temp(spanInstance._internalContainer);
    std::swap(this->_internalContainer, temp);
    return *this;
}