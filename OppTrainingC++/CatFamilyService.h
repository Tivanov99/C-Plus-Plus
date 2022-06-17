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
	int CreateLion() {
		try
		{
			cout << "Animal Name (Should be between 3 and 20 characters) : ";
			string name;
			cin >> name;
			validator.ValidateString("Animal Name", name, 3, 20);

			cout << "Animal Age (Should be between 1 and 25) : ";
			string age;
			cin >> age;
			validator.ValidateInt("Animal Age", age, 1, 25);

			cout << "Animal Weight (Should be between 5.0 and 350.0) : ";
			string weight;
			cin >> weight;
			validator.ValidateDouble("Animal Weight", weight, 5.0, 350.0);

			cout << "Animal Vaccinated (1.true/2.false) : ";
			string Vaccinated;
			cin >> Vaccinated;
			validator.ValidateInt("Animal Vaccinated", Vaccinated, 1, 2);

			cout << OptionalAnimalParameterMessage;
			cout << "Animal HuntingLevel: " << Low << ".Low " << Medium << ".Medium "
				 << High << ".High " << Professional << ".Professional " << " : ";
			string hunttingLevel;
			cin >> hunttingLevel;
			validator.ValidateInt("Animal HuntingLevel", hunttingLevel, 0, 3);

			cout << OptionalAnimalParameterMessage;
			cout << "Animal Level of danger (Should be between 1 and 5) : ";
			string LevelOfDanger;
			cin >> LevelOfDanger;
			validator.ValidateInt("Animal Level of danger", LevelOfDanger, 1, 5);

			cout << OptionalAnimalParameterMessage;
			cout << "Animal Happy Level (Should be between 1 and 5) : ";
			string HappyLevel;
			cin >> HappyLevel;
			validator.ValidateInt("Animal Happy Level", HappyLevel, 1, 5);

			cout << OptionalAnimalParameterMessage;
			cout << "Animal Food Level (Should be between 1 and 10) : ";
			string FoodLevel;
			cin >> FoodLevel;
			validator.ValidateInt("Animal Food Level", FoodLevel, 1,10);
		}
		catch (invalid_argument& ex)
		{
			cout << "\n - Somethig wrong! - ";
			cout << ex.what();
			cout << "If you wanna try again press (1).\n";
			cout << "For exit to main menu press (2).";
			cout << "Your choice: ";
			int choise;
			cin >> choise;
			return choise;
		}
		return 0;
	};
};

