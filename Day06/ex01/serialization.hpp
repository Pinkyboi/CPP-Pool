/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 14:33:10 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/17 12:06:30 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SERIALIZATION__
#define __SERIALIZATION__

#include <iostream>
#include <string>

typedef struct  Data
{
    std::string firstName;
    std::string lastName;
    int         creditCardNumber;
    
}               Data;
class serialization
{
    private:
        
    public:
                                    serialization(void){};
                                    serialization(const serialization& serializationIstance){};
        uintptr_t                   serialize(Data* ptr);
        Data*                       deserialize(uintptr_t raw);
                                    ~serialization(){};
        serialization&              operator=(const serialization& serializationInstance){return *this;};
};

#endif