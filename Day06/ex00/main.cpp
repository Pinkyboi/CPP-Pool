/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 02:44:58 by abenaiss          #+#    #+#             */
/*   Updated: 2021/08/07 19:44:48 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "scalarConvertor.hpp"

int main(int argc, char const **argv)
{
    if (argc != 2)
    {
        std::cout << "Usage: " << argv[0] << " <argument>" << std::endl;
        exit(-1);
    }
    scalarConvertor scalarConvertor(argv[1]);
    scalarConvertor.annouceChar();
    scalarConvertor.annouceInt();
    scalarConvertor.annouceFloat();
    scalarConvertor.annouceDouble();
}