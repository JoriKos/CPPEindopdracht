#include <iostream>
#include <string>
#include <array>
#include "ConsoleInOut.h"

void printArray(std::array<std::string, 4> tempArray)
{
	for (int i = 0; i < tempArray.size(); i++)
	{
		std::cout << tempArray[i] << std::endl;
	}
}

int main()
{
	//To do:
	//Input vragen
	//HP, LVEL, PJ selectie maken
	ConsoleInOut console;
	std::array<std::string,4> boeken = { "1. Serieloze boeken",
		"2. Harry Potter serie, door J.K. Rowling",
		"3. Het Leven van een Loser serie, door Jeff Kinney", 
		"4. Percy Jackson serie, door Rick Riordan"};
	std::array<std::string,4> SLB = { "Soldaat van Oranje, door Erik Hazelhoff Roelfzema" }; //Serieloze boeken
	std::array<std::string,4> HP = {""}; //Harry Potter
	std::array<std::string,4> LVEL = {""}; //Het leven van een loser
	std::array<std::string,4> PJ = {""}; //Percy Jackson

	while (true) {
		int antwoord = console.Vraag("Welkom bij de bibliotheek. Kies een nummer:");
		printArray(boeken);
	}
}