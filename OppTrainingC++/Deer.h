#pragma once
#include "HerbivorousAnimals.h";
class Deer : public HerbivorousAnimals
{
public:
	Deer(string name, int age, double weight, int happyLevel,
		int foodLevel, bool isVaccinated = false)
		:HerbivorousAnimals(name, age, weight, happyLevel, foodLevel, isVaccinated)
	{

	}
	void ShowAnimalType() {
		cout << "The " << Name << " is " << "deer";
	};
	void MakeSpecialSound() {
		cout << "beeeeee";
	};
};

