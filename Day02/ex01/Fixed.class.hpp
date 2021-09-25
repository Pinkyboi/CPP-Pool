/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 16:17:05 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/25 16:19:11 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED__
#define __FIXED__

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _fixePointValue;
		static const int _bitNumber = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &argument);
		Fixed(int numberValue);
		Fixed(float numberValue);
		~Fixed();
		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed &operator=(const Fixed &argument);
};
std::ostream& operator<< (std::ostream& stream, const Fixed& agument);

#endif