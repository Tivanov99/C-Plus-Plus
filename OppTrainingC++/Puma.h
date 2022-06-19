#pragma once
#include "Animal.h"
#include "Carnivores.h"
class Puma :
	public Animal, public  
{
public:
	Puma(string name, int age, double weight, int huntingLevel = 1,
		int levelOfDanger = 60, bool isVaccinated = false,
		int happyLevel = 40, int foodLevel = 30)
		:Animal(name, age, weight, happyLevel, foodLevel, isVaccinated)
		, Carnivores(huntingLevel, levelOfDanger) {
	};
	void GetAnimalType() {
		cout << "The " << Name << " is " << "Puma";
	}
	void MakeSpecialSound() {
		cout << "Roar\n";
	}
};

