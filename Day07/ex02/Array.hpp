/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:12:01 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/19 16:25:27 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY__
#define __ARRAY__

template<typename Container>
class Array
{
    private:
        unsigned int    _arrayLenght;
        Container       *_arrayContainer;
    public:
                        Array(void);
                        Array(unsigned int arrayLenght);
                        Array(const Array& arrayInstance);
        unsigned int    size(void);
        Array&          operator=(const Array& arrayInstance);
        Container&      operator[](unsigned int i);
        Container       operator[](unsigned int i) const;
                        ~Array();
};

template<typename Container>
Array<Container>::Array(void):_arrayLenght(0), _arrayContainer(NULL)
{
    this->_arrayContainer = NULL;
}

template<typename Container>
Array<Container>::Array(unsigned int arrayLenght):_arrayLenght(arrayLenght)
{
    this->_arrayContainer = new Container[this->_arrayLenght];
}

template<typename Container>
Array<Container>::Array(const Array& arrayInstance):_arrayLenght(0), _arrayContainer(NULL)
{
    *this = arrayInstance; 
}

template<typename Container>
Array<Container>::~Array()
{
    if(this->_arrayLenght)
        delete[] this->_arrayContainer;
}

template<typename Container>
unsigned int Array<Container>::size()
{
    return this->_arrayLenght;
}

template<typename Container>
Array<Container>& Array<Container>::operator=(const Array& arrayInstance)
{
    if(this == &arrayInstance)
        return *this;
    if(this->_arrayLenght)
        delete[] this->_arrayContainer;
    unsigned int arrayInstanceSize = arrayInstance._arrayLenght;
    this->_arrayLenght = arrayInstance._arrayLenght;
    this->_arrayContainer = new Container[arrayInstanceSize];
    for(int i = 0; i < arrayInstanceSize; i++)
        this->_arrayContainer[i] = arrayInstance[i];
    return *this;
}

template<typename Container>
Container& Array<Container>::operator[](unsigned i)
{
    if(i < 0 || i >= this->_arrayLenght)
        throw std::exception();
    return this->_arrayContainer[i];
}

template<typename Container>
Container Array<Container>::operator[](unsigned i) const
{
    if(i < 0 || i >= this->_arrayLenght)
        throw std::exception();
    return this->_arrayContainer[i];
}

#endif