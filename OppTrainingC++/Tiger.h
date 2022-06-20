#pragma once
#include "Animal.h"
#include "CarnivoresAnimal.h"
class Tiger :
	public CarnivoresAnimal
{
public:
	Tiger(string name, int age, double weight, int huntingLevel = 2,
		int levelOfDanger = 80, bool isVaccinated = false,
		int happyLevel = 30, int foodLevel = 40)
		:CarnivoresAnimal(name, age, weight, happyLevel, foodLevel, isVaccinated,
			huntingLevel, levelOfDanger) {
	};
	void ShowAnimalType() {
		cout << "The " << Name << " is " << "Tiger";
	}
	void MakeSpecialSound() {
		cout << "Roar\n";
	}
	void ShowFavoriteMeat() {
		cout << "Tiger's main diet is ungulates such as deer, horses, elk, cattle and sheep.";
	}
	void ShowHuntingType() {
		cout << "Tiger's hunting type is the following: Waiting his booty in the bush and when she is distracted jumps and drives nails and teeth into it.";
	}
};

