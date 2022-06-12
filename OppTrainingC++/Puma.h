#pragma once
#include "Animal.h"
#include "Carnivores.h"
class Puma :
	public Animal, public Carnivores
{
public:
	Puma(string name, int age, double weight, int huntingLevel = 1, int levelOfDanger = 60, bool isVaccinated = false)
		:Animal(name, age, weight, isVaccinated)
		, Carnivores(huntingLevel, levelOfDanger) {
	};
};

