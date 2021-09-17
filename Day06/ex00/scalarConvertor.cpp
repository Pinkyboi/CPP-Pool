/* ************************************************************************** */
/*                                                                            */
/*                                                       :::     ::::::::   */
/*   scalarConvertor.cpp                               :+:     :+:   :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 18:24:28 by abenaiss          #+#    #+#             */
/*   Updated: 2021/08/07 19:59:26 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalarConvertor.hpp"

scalarConvertor::scalarConvertor(const std::string &scalarArgument):_scalarArgument(scalarArgument)
{
}

scalarConvertor::scalarConvertor(const scalarConvertor& scalarInstance)
{
    *this = scalarInstance;
}

scalarConvertor::~scalarConvertor()
{
}

scalarConvertor::conversionErrorException::conversionErrorException(std::string errorMessage):_errorMessage(errorMessage)
{
}

const char* scalarConvertor::conversionErrorException::what(void) const throw()
{
    return _errorMessage.c_str();
}

void scalarConvertor::annouceInt(void) const
{
    scalarConvertor scalarInstance(*this);
    std::cout << "int: ";
    try
    {
        std::cout << int(scalarInstance) << std::endl;
    }
    catch(conversionErrorException &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void scalarConvertor::annouceFloat(void) const
{
    scalarConvertor scalarInstance(*this);
    std::cout << "float: ";
    try
    {
        float conversionValue = float(scalarInstance);
        if(conversionValue == floor(conversionValue))
            std::cout << std::fixed << std::setprecision(1);
        std::cout << conversionValue << 'f' << std::endl;
    }
    catch(conversionErrorException &e)
    {
        std::cout << e.what() << 'f' << std::endl;
    }
}

void scalarConvertor::annouceDouble(void) const
{
    scalarConvertor scalarInstance(*this);
    std::cout << "double: ";
    try
    {
        double conversionValue = double(scalarInstance);
        if(conversionValue == floor(conversionValue))
            std::cout << std::fixed << std::setprecision(1);
        std::cout << conversionValue << std::endl;
    }
    catch(conversionErrorException &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void scalarConvertor::annouceChar(void) const
{
    scalarConvertor scalarInstance(*this);
    std::cout << "char: ";
    try
    {
        std::cout << char(scalarInstance) << std::endl;
    }
    catch(conversionErrorException &e)
    {
        std::cout << e.what() << std::endl;
    }
}

scalarConvertor::operator int()
{
    int intScalar = 0;
    try
    {
       intScalar = std::stoi(this->_scalarArgument.c_str());
    }
    catch (std::invalid_argument &e)
    {
        throw conversionErrorException("Impossible");
    }
    catch (std::out_of_range &e)
    {
        throw conversionErrorException("Impossible");
    }
    return intScalar;
}

scalarConvertor::operator float()
{
    float floatScalar = 0.0f;
    try
    {
        floatScalar = std::stof(this->_scalarArgument.c_str());
        return floatScalar;
    }
    catch(std::invalid_argument &e)
    {
        return nanf("");    
    }
    catch(std::out_of_range &e)
    {
        return nanf("");
    }
}

scalarConvertor::operator double()
{
    double doubleScalar = 0.0;
    try
    {
        doubleScalar = std::stod(this->_scalarArgument.c_str());
        return doubleScalar;
    }
    catch(std::invalid_argument &e)
    {
        return nan("");    
    }
    catch(std::out_of_range &e)
    {
        return nan("");
    }
}

scalarConvertor::operator char()
{
    int charScalar;

    try
    {
        charScalar = std::stoi(this->_scalarArgument.c_str());
        if(charScalar < 0 || charScalar > 255)
            throw conversionErrorException("Impossible");
        if(!std::isprint(charScalar))
            throw conversionErrorException("Non displayable");
        return charScalar;
    }
    catch (std::invalid_argument &e)
    {
        throw conversionErrorException("Impossible");
    }
    catch (std::out_of_range &e)
    {
        throw conversionErrorException("Impossible");
    }
}

scalarConvertor& scalarConvertor::operator=(const scalarConvertor& scalarInstance)
{
    if(this == &scalarInstance)
        return *this;
    this->_scalarArgument = scalarInstance._scalarArgument;
    return *this;
}