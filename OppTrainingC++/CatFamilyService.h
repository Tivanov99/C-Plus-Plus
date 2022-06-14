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
			string name;
			cin >> name;
		}
		catch (const std::exception&)
		{
			return false;
		}
		return true;
	};
};

