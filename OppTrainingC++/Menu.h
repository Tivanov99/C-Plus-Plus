#pragma once
#include <iostream>
#include "AnimalFactory.h"
using namespace std;

class Menu
{
private:
	AnimalFactory factory;
public:
	void UserMenu() {
		cout << "Wellcome to user menu!\n";
		cout << "Register.\n";
	};
	void AdminMenu() {
		cout << "Wellcome to Animal Factory!\n";
		cout << "1.Create animal.\n";
		cout << "2.Remove animal.\n";
		cout << "Your choice: ";
		int id;
		cin >> id;
		factory.CallFunction(id);
	};
};

