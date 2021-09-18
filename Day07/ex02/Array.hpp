/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:12:01 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/18 18:07:29 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY__
#define __ARRAY__

template<typename Container>
class Array
{
    private:
        unsigned int    _arrayLenght;
    public:
        Container       *arrayContainer;
    public:
                        Array(void);
                        Array(unsigned int arrayLenght);
                        Array(const Array& arrayInstance);
        unsigned int    size(void);
        Array&          operator=(const Array& arrayInstance);
        Container       operator[](unsigned int i);
                        ~Array();
};

template<typename Container>
Array<Container>::Array(void):_arrayLenght(arrayLenght)
{
    arrayContainer = new Container[];
}

template<typename Container>
Array<Container>::Array(unsigned int arrayLenght):_arrayLenght(arrayLenght)
{
    arrayContainer = new Container[this->_arrayLenght];
}

template<typename Container>
Array<Container>::Array(const Array& arrayInstance)
{
    *this = arrayInstance; 
}

template<typename Container>
Array<Container>::~Array()
{
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
    delete[] this->arrayContainer;
    unsigned int arrayInstanceSize = arrayContainer.size();
    this->arrayContainer = new Container[arrayInstanceSize];
    for(int i = 0; i < arrayInstanceSize; i++)
        this->arrayContainer[i] = arrayInstance[i];
}

template<typename Container>
Container Array<Container>::operator[](unsigned i)
{
    try
    {
        return this->arrayContainer[i];
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

#endif