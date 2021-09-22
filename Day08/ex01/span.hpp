/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 17:25:02 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/22 15:57:35 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN__
#define __SPAN__

#include<vector>
#include<iostream>
#include<algorithm>
#include<limits>

class Span
{
    private:
        std::vector<int>       _internalContainer;
        unsigned int           _size;
    private:
                Span(void){};
    public:
                Span(const Span&spanInstance);
                Span(unsigned int size);
                ~Span();
        void    addNumber(int singleNumber);
        void    appendNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int     shortestSpan(void);
        int     longestSpan(void);
        Span&   operator=(const Span&spanInstance);
};



#endif