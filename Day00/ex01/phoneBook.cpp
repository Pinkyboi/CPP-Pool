/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:32:14 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/04 19:32:15 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int getIndex(size_t maxIndex)
{
	std::string	desiredIndex;
	std::cout << "Enter the index you want : ";
	std::getline(std::cin, desiredIndex);
	if(desiredIndex.size() == 1 &&  isdigit(desiredIndex[0]) && stoi(desiredIndex) < maxIndex)
		return(stoi(desiredIndex));
	return(-1);
}

std::string minimizeString(int charNumber, std::string string)
{
	int stringSize;

	stringSize = string.size();
	if (stringSize > charNumber)
  		string[charNumber - 1]= '.';
	return (string.substr(0, charNumber));
}

void	printBlock(std::string field, size_t width)
{
	std::cout << '|';
	std::cout << std::setw(width);
	std::cout << minimizeString(width, field);
	std::cout << '|';	
}

void	showContacts(Contact contactList[],int firstIndex,
		int listSize, int fieldNumber, size_t displayMode = 0)
{
	int startIndex;

	startIndex = (displayMode) ? 0 : -1;
	std::cout << std::endl;
	for (int i = firstIndex; i < listSize; i++){
		for (int j = startIndex; j < fieldNumber; j++){
			if (!displayMode){
				if(j == -1)
					printBlock(std::to_string(i), FIELD_SIZE);
				else
					printBlock(contactList[i].GetField(j), FIELD_SIZE);
			}
			else{
				if(displayMode){
					printBlock(contactList[i].GetMessage(j), MESSAGE_SIZE);
					printBlock(contactList[i].GetField(j), contactList[i].GetField(j).size());
					std::cout << std::endl;
				}
			}	
		}
		std::cout << std::endl;
	}
	std::cout <<std::endl;
}

int main()
{
	Contact		contactList[MAX_CONTACT];
	short		contactIndex = 0;
	std::string	currentCommand;
	int			ContactId;
	

	while (!std::feof(stdin) && !std::ferror(stdin)){
		std::cout << "Enter the command : ";
		std::getline(std::cin, currentCommand);
		if (currentCommand == "ADD"){
			if (contactIndex < MAX_CONTACT){
				contactList[contactIndex].CreateContact();
				contactIndex++;
			}
			else{
				std::cout << "ERROR: max contact number reached." << std::endl;
				continue ;
			}	
		}
		else if (currentCommand == "SEARCH"){
			while(1){
				showContacts(contactList,0, contactIndex, 4);
				if ((ContactId = getIndex(contactIndex)) != -1){
					showContacts(contactList,ContactId, ContactId + 1, ARG_NUMBER, 1);
					break ;
				}
				else
					std::cout << "Please enter a valid index" << std::endl;
			}
		}
		else if (currentCommand == "EXIT")
			break;
		else
			std::cout << "The only accepted commands are : ADD, SEARCH, EXIT." << std::endl;
	}
}