#include "Cesar.h"
#include <array>
#include <iostream>

char Cesar::cesaAl(char letter, int decrease)
{

	return ((letter - decrease) % 27);

}

std::string * Cesar::decrypt(char word[])
{

	std::string cases[27];
	std::string wordStr = std::string(word);
	char complete[wordStr.size()];
	int k = 0;

	for (int i=0; i<27; i++){
		for(int j=0; j<wordStr.size(); j++)
		{
			char x = cesaAl(word[j], i);
			complete[j] = x;
		} 
		cases[i] = complete;
		std::cout << cases[i] << std::endl;
	}
	
	return cases;

}
