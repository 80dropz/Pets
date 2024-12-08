#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

void petcheck();
void Dragon();
void Cat();
void Dog();
void sheep();

int PetChoice;
int linepetcheck = 0;
int curline = 0;

int main()
{
	// Defines the config and file name
	std::string filecheck = "Config.txt";
	std::ifstream config(filecheck); 
	std::string firstline;           

	if (config.is_open()) {
		std::cout << "Found config" << std::endl;
		Sleep(2000);
		std::getline(config, firstline);
		std::cout << "First line from the file: " << firstline << std::endl;
	}
	else {
		std::cerr << "Error: Unable to open the config file." << std::endl;
		Sleep(1000);
		petcheck();
	}

	return 0;
}



void petcheck()
{
	//just gets the basic pet and then writes to the file and allat
	std::ofstream config("Config.txt");
	std::cout << "Which pet do you want? \n1: Dragon \n2: Sheep \n3: Dog \n4: Cat \nChoice: ";
	std::cin >> PetChoice;
	if (PetChoice == 1)
	{
		std::cout << "You chose a Dragon \n";
		if (config.is_open())
		{
			config << "Dragon";
		}
		main();
	}
	if (PetChoice == 2)
	{
		std::cout << "You choise a Sheep \n";
		if (config.is_open())
		{
			config << "Sheep";
		}
		main();

	}
	if (PetChoice == 3)
	{
		std::cout << "You chose to be a Dog";
		if (config.is_open())
		{
			config << "Dog";
		}
		main();
	}
	if (PetChoice == 4)
	{
		std::cout << "You chose to be a Cat";
		if (config.is_open())
		{
			config << "Cat";
		}
		main();
	}
}
