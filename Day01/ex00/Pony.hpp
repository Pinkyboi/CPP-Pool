/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:29:57 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/04 17:29:59 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef _PONNY_HPP
#define _PONNY_HPP

class Pony
{
    public:
        Pony(/* args */);
        ~Pony();
    private:
        static int _total_number;
        static int _pony_number;
};

#endif