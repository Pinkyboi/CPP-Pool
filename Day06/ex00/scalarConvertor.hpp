/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalarConvertor.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 02:49:55 by abenaiss          #+#    #+#             */
/*   Updated: 2021/08/07 19:50:23 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>

class scalarConvertor
{
    private:
        std::string         _scalarArgument;
    public:
                            scalarConvertor(const std::string &scalarArgument);
                            scalarConvertor(const scalarConvertor &scalarInstance);
                            ~scalarConvertor();
        class               conversionErrorException : public std::exception
        {
            private:
                const std::string   _errorMessage;
            public:
                                    conversionErrorException(std::string errorMessage);
                                    ~conversionErrorException(void) throw(){};
                virtual const char  *what(void) const throw();
        };
        void                annouceInt(void) const;
        void                annouceFloat(void) const;
        void                annouceDouble(void) const;
        void                annouceChar(void) const;  
        scalarConvertor&    operator=(const scalarConvertor& scalarInstance);
                            operator int();
                            operator float();
                            operator double();
                            operator char();
};
