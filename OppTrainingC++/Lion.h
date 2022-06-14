#pragma once
#include "Animal.h"
#include "Carnivores.h"

class Lion : public Animal,
	public Carnivores
{
public:
	Lion(string name, int age, double weight, int huntingLevel = 1,
		int levelOfDanger = 60, bool isVaccinated = false,
		int happyLevel = 40, int foodLevel = 30)
		:Animal(name, age, weight, happyLevel, foodLevel, isVaccinated)
		, Carnivores(huntingLevel, levelOfDanger) {
	};
	void GetAnimalType() {
		cout << "The " << Name << " is " << "Lion";
	}
	void MakeSpecialSound() {
		cout << "Roar\n";
	}
};


