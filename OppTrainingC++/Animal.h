#pragma once
#include <string>
#include <iostream>
using namespace std;

class Animal {
public:
	Animal(string name, int age, double weight,int happyLevel,bool isVaccinated = false) {
		Name = name;
		Age = age;
		Vaccinated = isVaccinated;
		Weight = weight;
		HappyLevel = happyLevel;
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
	~Animal() {

	};
private:
	string Name;
	int Age;
	bool Vaccinated;
	double Weight;
	int HappyLevel;
};

