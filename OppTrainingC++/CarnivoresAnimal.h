#pragma once
#include "Carnivores.h"
#include "Animal.h"


class CarnivoresAnimal :public Animal, public Carnivores
{
public:
	CarnivoresAnimal(string name, int age, double weight, int huntingLevel,
		int levelOfDanger, bool isVaccinated,
		int happyLevel, int foodLevel)
		:Animal(name, age, weight, happyLevel, foodLevel, isVaccinated)
		, Carnivores(huntingLevel, levelOfDanger)
	{

	}
};

