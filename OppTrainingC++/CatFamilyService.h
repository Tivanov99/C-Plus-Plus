#pragma once
#include <exception>
#include <string>
#include <iostream>
#include "Hunting.cpp"
#include "ValueValidator.h"

using namespace std;

class CatFamilyService
{
private:
	string OptionalAnimalParameterMessage =
		"\n - This parameter is optional, if you don't want to fill just write '-1' - \n";
	ValueValidator validator;

public:
	bool CreateLion() {
		try
		{
			cout << "Animal Name (Should be between 3 and 20 characters) : ";
			string name;
			cin >> name;
			validator.ValidateString("Animal Name", name, 3, 20);


			cout << "Animal Age (Should be between 1 and 25) : ";
			int age;
			cin >> age;

			cout << "Animal Weight (Should be between 5 and 350) : ";
			double weight;
			cin >> weight;

			cout << OptionalAnimalParameterMessage;
			cout << "Animal HuntingLevel: " << Low << ".Low " << Medium << ".Medium "
				 << High << ".High " << Professional << ".Professional " << " : ";
			int hunttingLevel;
			cin >> hunttingLevel;

			cout << OptionalAnimalParameterMessage;
			cout << "Animal Level of danger (Should be between 1 and 5) : ";
			int LevelOfDanger;
			cin >> LevelOfDanger;

			cout << "Animal Vaccinated (true/false) : ";
			string Vaccinated;
			cin >> Vaccinated;

			cout << OptionalAnimalParameterMessage;
			cout << "Animal Happy Level (Should be between 1 and 5) : ";
			int HappyLevel;
			cin >> HappyLevel;

			cout << OptionalAnimalParameterMessage;
			cout << "Animal Food Level (Should be between 1 and 10) : ";
			int FoodLevel;
			cin >> FoodLevel;
		}
		catch (...)
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

