#pragma once
#include "CarnivoresAnimal.h"
class Puma :
	public CarnivoresAnimal
{
public:
	Puma(string name, int age, double weight, int huntingLevel = 1,
		int levelOfDanger = 60, bool isVaccinated = false,
		int happyLevel = 40, int foodLevel = 30)
		:CarnivoresAnimal(name, age, weight, happyLevel, foodLevel, isVaccinated,
			huntingLevel, levelOfDanger) {
	};
	void GetAnimalType() {
		cout << "The " << Name << " is " << "Puma";
	}
	void MakeSpecialSound() {
		cout << "Roar\n";
	}
};

