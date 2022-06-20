#pragma once
#include "Animal.h"
#include "Herbivorous.h"

class HerbivorousAnimals :
	public Animal, public Herbivorous
{
public:
	HerbivorousAnimals(string name, int age, double weight, int happyLevel,
		int foodLevel, bool isVaccinated = false)
		:Animal(name, age, weight, happyLevel, foodLevel, isVaccinated)
	{

	}
	/*void ShowAnimalType() {

	};
	void MakeSpecialSound() {

	};*/
};

