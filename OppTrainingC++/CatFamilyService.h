#pragma once
#include <exception>
#include <string>
#include <iostream>
#include "HuntingLevel.cpp"
#include "GlobalConstants.h"

using namespace std;

class CatFamilyService
{
private:
	HuntingLevel HuntingLevel;
	string OptionalAnimalParameterMessage =
		"This parameter is optional, if you don't want to fill just write '-1'\n";
public:
	bool CreateLion() {
		try
		{
			cout << "Animal Name : ";
			string name;
			cin >> name;
			cout << "\n";

			cout << "Animal Age: ";
			int age;
			cin >> age;
			cout << "\n";

			cout << "Animal Weight";
			double weight;
			cin >> weight;
			cout << "\n";

			cout << OptionalAnimalParameterMessage;
			cout << "Animal HuntingLevel: " << Low << "Low" << Medium << "Medium"
				 << High << "High" << Professional << "Professional" << ": ";
			int hunttingLevel;
			cin >> hunttingLevel;
			cout << "\n";


			cout << OptionalAnimalParameterMessage;

		}
		catch (const std::exception&)
		{
			return false;
		}
		return true;
	};
};

