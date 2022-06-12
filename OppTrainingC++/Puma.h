#pragma once
#include "Animal.h"
#include "Carnivores.h"
class Puma :
	public Animal, public Carnivores
{
public:
	Puma(string name, int age, double weight, int huntingLevel, bool isVaccinated = false)
		:Animal(name, age, weight, isVaccinated)
		, Carnivores(huntingLevel) {

	};
};

