#include <iostream>
#include <string>
#include <vector>
#include "ConsoleInOut.h"

void printArray(std::vector<std::string> tempArray)
{
	for (int i = 0; i < tempArray.size(); i++)
	{
		std::cout << tempArray[i] << std::endl; //Print de array door middel van een for loop
	}
}

int main()
{
	/*To do:
	HP, LVEL, PJ selectie maken
	*/
	ConsoleInOut console;
	std::vector<std::string> boeken = { "1. Serieloze boeken",
		"2. Harry Potter serie, door J.K. Rowling",
		"3. Het Leven van een Loser serie, door Jeff Kinney", 
		"4. Percy Jackson serie, door Rick Riordan",
		"5. Voeg een eigen boek toe"};
	std::vector<std::string> SLB = { "Soldaat van Oranje, door Erik Hazelhoff Roelfzema"}; //Serieloze boeken
	std::vector<std::string> HP = {"test"}; //Harry Potter
	std::vector<std::string> LVEL = {""}; //Het leven van een loser
	std::vector<std::string> PJ = {""}; //Percy Jackson

	while (true) 
	{
		printArray(boeken);
		int antwoord = console.Vraag("Welkom bij de bibliotheek. Kies een nummer:");  // Antwoord wordt teruggegeven als een int
		switch (antwoord)
		{
		case 1:
			printArray(SLB);
			break;
		case 2:
			printArray(HP);
			break;
		case 3:
			printArray(LVEL);
			break;
		case 4:
			printArray(PJ);
			break;
		case 5:
			std::cout << "Welk boek wil je toevoegen?" << std::endl;
			std::string tBoek;
			std::getline(std::cin, tBoek);
			boeken[4] = "5. " + tBoek;
			printArray(boeken);
			break;
		}
	}
}