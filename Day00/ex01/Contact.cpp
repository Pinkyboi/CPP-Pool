/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ponebook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 18:26:19 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/04 18:26:20 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

const std::string Contact::_messages[ARG_NUMBER] = 
{
	"first name : ",
	"last name : ",
	"nickname : ",
	"login : ",
	"postal address : ",
	"email address : ",
	"phone number : ",
	"birthday date : ",
	"favorite meal : ",
	"underwear color : ",
	"darkest secret : ",
};

void Contact::CreateContact()
{
	for (int i = 0; i < ARG_NUMBER; i++){
		std::cout << "What is your " << Contact::_messages[i];
		std::getline(std::cin, this->_fields[i]);
	}
}

std::string Contact::GetField(int fieldIndex)
{
	std::string stringClone;
	stringClone = "";
	if (fieldIndex > -1 && fieldIndex < ARG_NUMBER)
		stringClone = this->_fields[fieldIndex];
	return(stringClone);
}

std::string Contact::GetMessage(int messageIndex)
{
	std::string stringClone;
	stringClone = "";
	if (messageIndex > -1 && messageIndex < ARG_NUMBER)
		stringClone = this->_messages[messageIndex];
	return(stringClone);
}

Contact::Contact()
{
}

Contact::~Contact()
{
}
