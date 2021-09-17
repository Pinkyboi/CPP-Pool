/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 14:33:10 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/14 16:50:45 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

// Write a function "uintptr_t serialize(Data* ptr);". This function will return
// the parameter in an integer type.
// Write a function "Data* deserialize(uintptr_t raw);". This function will return
// the raw data you created using "serialize" to a Data structure.
// Wrap these two functions in a program that proves that everything works as intended.
// You must create a valid data structure.
// Take a Data address use serialize on it.
// Send the return value in deserialize.
// Check if the return value is equal to the first pointer.
// Do not forget to include the Data structure you used.

typedef struct  Data
{
    std::string firstName;
    std::string lastName;
    int         creditCardNumber;
    
}               Data;

class serialization
{
    private:
        Data*                       _data;
    public:
                                    serialization(const serialization& serializationInstance);
                                    serialization(Data* serializationAgurment);
        uintptr_t                   serialize(Data* ptr);
        Data*                       deserialize(uintptr_t raw);
                                    ~serialization();
};

serialization::serialization(const serialization& serializationInstance)
{
    std::cout << "Copy constructor called" << std::endl;
}

serialization::serialization(Data* serializationAgurment)
{
    
}
serialization::~serialization()
{
}

Data*   serialization::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

uintptr_t serialization::serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}