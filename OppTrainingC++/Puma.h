#pragma once
#include "Animal.h"
#include "Carnivores.h"
class Puma :
	public Animal, public Carnivores
{
public:
	Puma(string name, int age, double weight, int huntingLevel = 1,
		int levelOfDanger = 60, bool isVaccinated = false,
		int happyLevel = 40, int foodLevel = 30)
		:Animal(name, age, weight, happyLevel, foodLevel, isVaccinated)
		, Carnivores(huntingLevel, levelOfDanger) {
	};
	void GetAnimalType() {
		cout << Name << " Is " << "Puma!";
	}
};

