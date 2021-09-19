/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 17:25:02 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/19 18:25:43 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN__
#define __SPAN__

#include <vector>
#include<iostream>
#include<algorithm>
#include<limits>

template<typename T>

class Span
{
    private:
        T       _internalContainer;
    private:
                Span(void){};
                Span(const &spanInstance){};
    public:
                Span(T& containerFiller);
                ~Span();
        void    addNumber(int singleNumber) throw();
        int     shortestSpan(void);
        int     longestSpan(void);
};



#endif