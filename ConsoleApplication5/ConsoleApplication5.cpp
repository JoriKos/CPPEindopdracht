#include <iostream>
#include "ConsoleInOut.h"
#include <Windows.h>

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
		console.printArray(boeken);
		int antwoord = console.Vraag("Welkom bij de bibliotheek. Kies een nummer:");  // Antwoord wordt teruggegeven als een int
		switch (antwoord)
		{
		case 1:
			console.printArray(SLB);
			break;
		case 2:
			console.printArray(HP);
			break;
		case 3:
			console.printArray(LVEL);
			break;
		case 4:
			console.printArray(PJ);
			break;
		case 5:
			std::cout << "Welk boek wil je toevoegen en wie is de schrijver? Maximaal 500 karakters" << std::endl;
			char tBoek[500]; //Char array met maximaal 500 karakters voor een titel + schrijver
			std::cin.getline(tBoek,500); //Pakt input
			std::string str(tBoek); //Zet char array om in een string
			boeken[4] = "5. " + str;
			break;
		}
	}
}