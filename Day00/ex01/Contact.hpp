/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 18:27:15 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/25 16:13:47 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT__
#define __CONTRACT__

#include <iostream>
#include <iomanip>

#define ARG_NUMBER 11
#define FIELD_SIZE 10
#define MESSAGE_SIZE 20
#define MAX_CONTACT 8

class Contact
{

	private:
		static const std::string _messages[ARG_NUMBER];
		std::string _fields[ARG_NUMBER];
	public:
		Contact();
		void CreateContact();
		std::string GetField(int fieldIndex);
		std::string GetMessage(int messageIndex);
		~Contact();
};

#endif