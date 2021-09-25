/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 16:17:05 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/25 16:18:26 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED__
#define __FIXED__

#include <iostream>

class Fixed
{
	private:
		int _fixePointValue;
		static const int _bitNumber = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &argument);
		~Fixed();
		int		getRawBits(void) const;
		int		toInt(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		Fixed	&operator=(const Fixed &argument);
};

#endif