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
	void AdminMenu() {
		cout << "Wellcome to Animal Factory!\n";
		cout << "1.Create animal.\n";
		cout << "2.Remove animal.\n";
		int id;
		cin >> id;
	};
};