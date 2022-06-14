#pragma once
#include <string>
#include <iostream>
using namespace std;
class AnimalFactory
{
public:
	AnimalFactory()
	{

	}
	void UserMenu() {
		cout << "Wellcome to user menu!\n";
		cout << "Register.\n";
	};
	void AdminMenu() {
		cout << "Wellcome to Animal Factory!\n";
		cout << "1.Create animal.\n";
		cout << "2.Remove animal.\n";
		int id;
		cin >> id;
	};
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
		cout << "1.- From 'Car Family' -\n";
		cout << "(1.1) - Lion\n";
		cout << "(1.2) - Puma\n";
		cout << "(1.3) - Tiger\n";
		cout << "Write the code which is inside the brackets! - Example 1.1 - :";
		double code;
		cin >> code;

	};
	void DeleteAnimal() {

	}
	bool CreateAnimal(int animalType) {
		switch (animalType)
		{
		case 1:  break;
		default:
			break;
		}
	}
};