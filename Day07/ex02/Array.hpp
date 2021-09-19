/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:12:01 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/19 01:32:00 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY__
#define __ARRAY__

template<typename ContainerType>
class Array
{
    private:
        unsigned int    _arrayLenght;
    public:
        ContainerType       *arrayContainer;
    public:
                        Array(void);
                        Array(unsigned int arrayLenght);
                        Array(const Array& arrayInstance);
        unsigned int    size(void);
        Array&          operator=(const Array& arrayInstance);
        ContainerType&      operator[](unsigned int i);
        ContainerType       operator[](unsigned int i) const;
                        ~Array();
};

template<typename ContainerType>
Array<ContainerType>::Array(void):_arrayLenght(0)
{
    arrayContainer = NULL;
}

template<typename ContainerType>
Array<ContainerType>::Array(unsigned int arrayLenght):_arrayLenght(arrayLenght)
{
    arrayContainer = new ContainerType[this->_arrayLenght];
}

template<typename ContainerType>
Array<ContainerType>::Array(const Array& arrayInstance)
{
    *this = arrayInstance; 
}

template<typename ContainerType>
Array<ContainerType>::~Array()
{
    if(this->_arrayLenght)
        delete[] this->arrayContainer;
}

template<typename ContainerType>
unsigned int Array<ContainerType>::size()
{
    return this->_arrayLenght;
}

template<typename ContainerType>
Array<ContainerType>& Array<ContainerType>::operator=(const Array& arrayInstance)
{
    if(this == &arrayInstance)
        return *this;
    if(this->_arrayLenght)
        delete[] this->arrayContainer;
    unsigned int arrayInstanceSize = arrayInstance._arrayLenght;
    this->arrayContainer = new ContainerType[arrayInstanceSize];
    for(int i = 0; i < arrayInstanceSize; i++)
        this->arrayContainer[i] = arrayInstance[i];
    return *this;
}

template<typename ContainerType>
ContainerType& Array<ContainerType>::operator[](unsigned i)
{
    if(i >= this->_arrayLenght)
        throw std::exception();
    return this->arrayContainer[i];
}

template<typename ContainerType>
ContainerType Array<ContainerType>::operator[](unsigned i) const
{
    if(i >= this->_arrayLenght)
        throw std::exception();
    return this->arrayContainer[i];
}

#endif