/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 17:07:16 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/08 17:07:17 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
class Brain
{
	private:
		char	_IQ;
	public:
		Brain(short IQ = 100);
		std::string identify(void) const;
		~Brain(void);
};