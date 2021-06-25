/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 16:17:05 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/15 16:17:12 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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