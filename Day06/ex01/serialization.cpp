/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 14:32:56 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/17 10:51:20 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

Data*   serialization::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

uintptr_t serialization::serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}