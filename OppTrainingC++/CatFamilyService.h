#pragma once
#include <exception>
#include <string>
#include <iostream>
#include "Hunting.cpp"

using namespace std;

class CatFamilyService
{
private:
	string OptionalAnimalParameterMessage =
		"This parameter is optional, if you don't want to fill just write '-1'\n";
public:
	bool CreateLion() {
		try
		{
			cout << "Animal Name (Should be between 3 and 20 characters) : ";
			string name;
			cin >> name;

			cout << "Animal Age (Should be between 1 and 25) : ";
			int age;
			cin >> age;

			cout << "Animal Weight : (Should be between 5 and 350)";
			double weight;
			cin >> weight;

			cout << OptionalAnimalParameterMessage;
			cout << "Animal HuntingLevel: " << Low << ".Low " << Medium << ".Medium "
				 << High << ".High " << Professional << ".Professional " << " : ";
			int hunttingLevel;
			cin >> hunttingLevel;

			cout << OptionalAnimalParameterMessage;
			cout << "Animal Level of danger : (Should be between 1 and 5)";
			int LevelOfDanger;
			cin >> LevelOfDanger;

			cout << "Animal Vaccinated (true/false) : ";
			bool Vaccinated;
			cin >> Vaccinated;

			cout << OptionalAnimalParameterMessage;
			cout << "Animal Happy Level : (Should be between 1 and 5)";
			int HappyLevel;
			cin >> HappyLevel;

			cout << OptionalAnimalParameterMessage;
			cout << "Animal Food Level : (Should be between 1 and 10)";
			int FoodLevel;
			cin >> FoodLevel;
		}
		catch (const std::exception&)
		{
			cout << "- Somethig wrong! -\n";
			cout << "If you wanna try again press (1).\n";
			cout << "For exit to main menu press (2).";
			cout << "Your choice: ";
			int choise;
			cin >> choise;
		}
		return true;
	};
};

