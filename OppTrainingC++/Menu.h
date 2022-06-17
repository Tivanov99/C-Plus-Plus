#pragma once
#include <iostream>
#include "AnimalFactory.h"
using namespace std;

class Menu
{
private:
	AnimalFactory factory;
	void UserMenu() {

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
				if (value < 1 || value > 2) {
					throw std::out_of_range("The number must be one of the ones shown above.\n");
				}

			}
			catch (const std::exception& ex)
			{
				string value = typeid(ex).name();
				if (value._Equal("class std::out_of_range")) {
					cout << ex.what();
				}
				else {
					cout << "\nInvalid choice (Value must be number)! Try again!\n";
				}
			}
		}
	};

};

