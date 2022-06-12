#pragma once
#include <string>
#include <iostream>
using namespace std;

class Animal {
public:
	Animal(string name, int age, bool isVaccinated = false) {
		Name = name;
		Age = age;
		Vaccinated = isVaccinated;
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
	bool IsVaccinated() {
		return Vaccinated;
	}
	~Animal() {

	};
private:
	string Name;
	int Age;
	bool Vaccinated;
};

