/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:29:57 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/25 16:14:17 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef __PONNY__
#define __PONNY__

#include <iostream>
class Pony
{
    public:
        Pony();
        ~Pony();
    private:
        static int _total_number;
        int _pony_number;
};

#endif