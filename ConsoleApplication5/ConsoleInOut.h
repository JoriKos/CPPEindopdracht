#pragma once
#include <iostream>
#include <string>
class ConsoleInOut
{
public:
	ConsoleInOut();
	~ConsoleInOut();
	int Vraag(std::string vraag) {
		std::cout << vraag << std::endl; //Stel vraag
		std::string input;
		std::cin >> input;
		int i = std::stoi(input);
		return i;
	}
};