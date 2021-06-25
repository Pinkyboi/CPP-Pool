/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileReplace.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 17:26:10 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/11 17:26:18 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

void	throwError(std::string errorMessage, int signal)
{
	std::cout << errorMessage << std::endl;
	exit(signal);
}

void	replaceWord(std::string &fileText, std::string word,
	std::string wordReplacement)
{
	int index = 0;
	while(1){
		index = fileText.find(word, index);
		if(index == std::string::npos)
			break;
		fileText.erase(index, word.length());
		fileText.insert(index, wordReplacement);
	}
}

void	createFile(std::string fileText, std::string fileName)
{
	std::ofstream newFile;

	newFile.open(fileName.append(".replace"));
	if(!newFile.is_open())
		throwError("Error: error during file creation", -1);
	newFile << fileText;
}

void	readFile(std::string &fileText, std::ifstream &file)
{
	std::stringstream buffer;

	buffer << file.rdbuf();
	fileText = buffer.str();
}

int main(int argc, char **argv)
{
	std::ifstream  afile;
	std::string fileText;

	if(argc != 4)
		throwError("./usage [s1] [s2] [file name]", -1);
	if(!argv[1] || !argv[2] || !argv[3])
		throwError("./usage [s1] [s2] [file name]", -1);
	afile.open(argv[3]);
	if(!afile.is_open())
		throwError("Error: make sure that your file excists", -1);
	readFile(fileText, afile);
	replaceWord(fileText, argv[1], argv[2]);
	createFile(fileText, argv[3]);
	afile.close();
}