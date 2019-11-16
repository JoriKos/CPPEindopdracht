#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <string>

class ConsoleInOut
{
public:
	ConsoleInOut();
	~ConsoleInOut();
	int Vraag(std::string vraag) {
		std::cout << vraag << std::endl; //Stel vraag
		std::string input;
		std::getline(std::cin,input);
		int i = std::stoi(input);
		return i;
	}
	void printArray(std::vector<std::string> tempArray)
	{
		for (int i = 0; i < tempArray.size(); i++)
		{
			std::cout << tempArray[i] << std::endl; //Print de array door middel van een for loop
		}
	}
};