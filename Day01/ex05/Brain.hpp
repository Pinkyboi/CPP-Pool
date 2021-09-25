/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 17:07:16 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/25 16:16:07 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN__
#define __BRAIN__

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

#endif