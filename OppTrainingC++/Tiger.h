#pragma once
#include "Animal.h"
#include "Carnivores.h"
class Tiger :
    public Animal, public Carnivores
{
public:
	Tiger(string name, int age, double weight, int huntingLevel = 2,
		int levelOfDanger = 80, bool isVaccinated = false,
		int happyLevel = 30, int foodLevel = 40)
		:Animal(name, age, weight, happyLevel, foodLevel, isVaccinated)
		, Carnivores(huntingLevel, levelOfDanger) {
	};
	void GetAnimalType() {
		cout << Name << " Is " <<typeid(this).name() << "\n";
	}
	void MakeSpecialSound() {
		cout << "Roar\n";
	}
};

