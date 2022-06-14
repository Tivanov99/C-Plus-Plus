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
			cout << "Animal Name : ";
			string name;
			cin >> name;

			cout << "Animal Age: ";
			int age;
			cin >> age;

			cout << "Animal Weight: ";
			double weight;
			cin >> weight;

			cout << OptionalAnimalParameterMessage;
			cout << "Animal HuntingLevel: " << Low << ".Low " << Medium << ".Medium "
				 << High << ".High " << Professional << ".Professional " << ": ";
			int hunttingLevel;
			cin >> hunttingLevel;

			cout << OptionalAnimalParameterMessage;
			cout << "Animal Level of danger: ";
			int LevelOfDanger;
			cin >> LevelOfDanger;

			cout << "Animal Vaccinated (true/false) : ";
			bool Vaccinated;
			cin >> Vaccinated;

			cout << OptionalAnimalParameterMessage;
			cout << "Animal Happy Level: ";
			int HappyLevel;
			cin >> HappyLevel;

			cout << OptionalAnimalParameterMessage;
			cout << "Animal Food Level: ";
			int FoodLevel;
			cin >> FoodLevel;

		}
		catch (const std::exception&)
		{
			return false;
		}
		return true;
	};
};

