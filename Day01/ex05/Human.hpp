/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 17:07:29 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/08 17:07:30 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

class Human
{
	private:
		const Brain _Brain;
	public:
		Human(/* args */);
		const Brain &getBrain();
		std::string identify(void);
		~Human();
};
