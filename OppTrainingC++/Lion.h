#pragma once
#include "Animal.h"
#include "CarnivoresAnimal.h"

class Lion : public CarnivoresAnimal
{
public:
	Lion(string name, int age, double weight, int huntingLevel = 1,
		int levelOfDanger = 70, bool isVaccinated = false,
		int happyLevel = 60, int foodLevel = 0)
		:CarnivoresAnimal(name, age, weight, happyLevel, foodLevel, isVaccinated,
			huntingLevel, levelOfDanger) {
	};

	void ShowAnimalType() {
		cout << "The " << Name << " is " << "Lion";
	}
	void MakeSpecialSound() {
		cout << "Roar\n";
	}
	void ShowFavoriteMeat() {
		cout << "Lion's main diet is ungulates such as deer, horses, elk, cattle and sheep.";
	}
	void ShowHuntingType() {
		cout << "Lion's hunting type is the following: Waiting his booty in the bush and when she is distracted jumps and drives nails and teeth into it.";
	}
};


