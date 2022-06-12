#pragma once
using namespace std;
#include <string>
#include <iostream>
#include "HuntingLevel.cpp"
class Carnivores
{
public:
	Carnivores(int huntingLevel, int dangerLevel)
	{
		HuntingLevel = huntingLevel;
		DangerLevel = dangerLevel;
	};
	void ShowHuntingLevel() {
		switch (HuntingLevel)
		{
		case 0: cout << "Low\n"; break;
		case 1: cout << "Medium\n"; break;
		case 2: cout << "High\n"; break;
		case 3: cout << "Professional\n"; break;
		default:
			cout << "Something wrong with hunting level\n"; break;
		}
	};

private:
	int HuntingLevel;
	int DangerLevel;
};