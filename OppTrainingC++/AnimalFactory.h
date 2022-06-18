#pragma once
#include <string>
#include <iostream>
#include "CatFamilyService.h"
using namespace std;
class AnimalFactory
{
	CatFamilyService catService;
	friend class Menu ;

public:
	AnimalFactory()
	{

	}
	
private:
	void CallFunction(int i) {
		switch (i)
		{
		case 1: ShowAllAvailableAnimals(); break;
		case 2: DeleteAnimal(); break;
		default:
			break;
		}
	};
	void ShowAllAvailableAnimals() {
		cout << "1.- From 'Cat Family' -\n";
		cout << "(1) - Lion\n";
		cout << "(2) - Puma\n";
		cout << "(3) - Tiger\n";
		cout << "Write the code which is inside the brackets! :  ";
		int animalCode;
		cin >> animalCode;
		cout << "\n";
		CreateAnimal(animalCode);
	};

	void DeleteAnimal() {

	}
	bool CreateAnimal(int animalCode) {
		switch (animalCode)
		{
		case 1: cout << "You choose to create Lion! Creation of Lion want's following parameters:\n";
			catService.CreateLion();
			break;
		default:
			break;
		}

		return false;
	}
};