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
		cout << "\nAdmin menu.\n";
		cout << "0.Back to main menu.\n";
		cout << "1.Create animal.\n";
		cout << "2.Remove animal.\n";
		cout << "Your choice: ";
		try
		{
			string id;
			cin >> id;
			int value = stoi(id);
			if (value > 0) {
				factory.CallFunction(value);
			}
		}
		catch (const std::exception&)
		{

		}
		

	};
public:
	void MainMenu() {
		cout << "Wellcome to Main menu!\n";
		cout << "1.Go to user menu.\n";
		cout << "2.Go to admin menu.\n\n";
		cout << "Enter you choice: ";
		string userInput;
		int choice;
		while (true)
		{
			cin >> userInput;
			choice = validator.ValidateMenuSelection(userInput);

			if (choice != -1) {
				switch (choice)
				{
				case 1:UserMenu();break;
				case 2:AdminMenu();break;
				}
			}
			cout << "\n1.Go to user menu.\n";
			cout << "2.Go to admin menu.\n\n";
			cout << "Enter you choice: ";
		}
	};
};

