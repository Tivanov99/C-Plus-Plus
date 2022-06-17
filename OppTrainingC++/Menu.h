#pragma once
#include <iostream>
#include "AnimalFactory.h"
using namespace std;

class Menu
{
private:
	AnimalFactory factory;

public:
	void MainMenu() {
		cout << "Wellcome to Main menu!\n";
		cout << "1.Go to user menu.\n";
		cout << "2.Go to admin menu.\n";

	};
	void AdminMenu() {
		cout << "Wellcome to admin menu!\n";
		cout << "1.Create animal.\n";
		cout << "2.Remove animal.\n";
		cout << "Your choice: ";
		int id;
		cin >> id;
		factory.CallFunction(id);
	};
};

