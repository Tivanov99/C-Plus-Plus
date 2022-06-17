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
		cout << "2.Go to admin menu.\n\n";
		while (true)
		{
			cout << "Enter you choice: ";
			try
			{
				string userInput;
				cin >> userInput;
				int value = stoi(userInput);
				if (value < 1 || value>2) {
					throw std::invalid_argument("The number must be one of the ones shown above.");
				}
			}
			catch (const std::exception& ex)
			{
				cout << "\nInvalid choice! Try again!\n";
				string value = typeid(ex).name();
				if (value._Equal("class std::invalid_argument")) {
					cout << ex.what();
				}
				continue;
			}

		}

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

