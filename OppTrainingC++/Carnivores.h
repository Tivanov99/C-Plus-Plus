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
	int GetHuntingLevelAsNumber() {
		return HuntingLevel;
	};
	void ShowHuntingLevelName() {
		switch (HuntingLevel)
		{
		case 0: cout << "Low"; break;
		case 1: cout << "Medium"; break;
		case 2: cout << "High"; break;
		case 3: cout << "Professional"; break;
		default:
			cout << "Something wrong with hunting level"; break;
		}
	};

private:
	int HuntingLevel;
	int DangerLevel;
};