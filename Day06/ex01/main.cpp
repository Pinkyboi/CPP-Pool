/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 14:32:40 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/17 11:11:49 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

int main()
{
    Data data = {"sup", "nup", 42069};

    serialization *s = new serialization;
    Data sdata = *s->deserialize(s->serialize(&data));


    std::cout << sdata.creditCardNumber << std::endl;
    std::cout << sdata.firstName << std::endl;
    std::cout << sdata.lastName << std::endl;
    std::cout << s->serialize(&data);
}