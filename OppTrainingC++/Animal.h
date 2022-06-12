#pragma once
#include <string>
#include <iostream>
using namespace std;

class Animal {
public:
	Animal(string name, int age, double weight, int happyLevel,
		int foodLevel, bool isVaccinated = false) {
		Name = name;
		Age = age;
		Vaccinated = isVaccinated;
		Weight = weight;
		HappyLevel = happyLevel;
		FoodLevel = foodLevel;
	};
	Animal(Animal& a) {
		Name = a.Name;
		Age = a.Age;
		Vaccinated = a.Vaccinated;
	};
	string GetName() {
		return Name;
	}
	int GetAge() {
		return Age != 0 ? Age : 0;
	}
	double GetWeight() {
		return Weight;
	}
	bool IsVaccinated() {
		return Vaccinated;
	}
	void Play() {
		if (FoodLevel <= 10) {
			cout << Name << " need some food!";
		}
		else
		{
			FoodLevel -= 10;
			if ((HappyLevel + 10) <= 100) {
				HappyLevel += 10;
			};
			cout << Name << " is Playing! His Happy level is " << HappyLevel;
		}
	}
	void Feed(int foodValue) {
		if (foodValue <= 0) {
			cout << "You cannot feed animal with negative value of food!";
		}
		else {
			if (FoodLevel == 100) {
				cout << "The animal is fully fed!";
			}
			else {
				if ((FoodLevel + foodValue) >= 100) {
					FoodLevel = 100;
				}
				else
				{
					FoodLevel += foodValue;
				}
					cout << "The animal is fed!";
			}
		}
	}
	virtual void GetAnimalType() = 0;
	~Animal() {

	};
protected:
	string Name;
	int Age;
	bool Vaccinated;
	double Weight;
	int HappyLevel;
	int FoodLevel;
};

