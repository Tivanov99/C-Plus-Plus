#pragma once
#include <exception>
#include <string>
#include <iostream>
using namespace std;

class CatFamilyService
{
	CatFamilyService()
	{

	};
	bool CreateLion() {
		try
		{
			cout << "Animal Name : ";
			string name;
			cin >> name;
			cout << "Animal Age: ";
			int age;
			cin >> age;
			cout << "Animal Weight";
			double weight;
			cin >> weight;
		}
		catch (const std::exception&)
		{
			return false;
		}
		return true;
	};
};

