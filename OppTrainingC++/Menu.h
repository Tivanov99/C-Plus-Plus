#pragma once
#include <iostream>
#include "AnimalFactory.h"
using namespace std;

class Menu
{
private:
	AnimalFactory factory;
	ValueValidator validator;

	void UserMenu() {
		cout << "\nUser menu.\n";
		cout << "0.Back to main menu.\n";
	};
	void AdminMenu() {
		cout << "Admin menu.\n";
		cout << "0.Back to main menu.\n";
		cout << "1.Create animal.\n";
		cout << "2.Remove animal.\n";
		cout << "Your choice: ";
		int id;
		cin >> id;
		factory.CallFunction(id);
	};
public:
	void MainMenu() {
			cout << "Wellcome to Main menu!\n";
		while (true)
		{
			cout << "1.Go to user menu.\n";
			cout << "2.Go to admin menu.\n\n";
			cout << "Enter you choice: ";
			string userInput;
			cin >> userInput;
			int choise = validator.ValidateMenuSelection(userInput);
			switch (choise)
			{
			case 1:UserMenu();break;
			case 2:AdminMenu();break;
			}
		}
	};

};

