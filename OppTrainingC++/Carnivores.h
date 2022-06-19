#pragma once
using namespace std;
#include <string>
#include <iostream>
class Carnivores
{
private:
	const string HuntingLevelMessage = "The hunting level is: ";
	int Hunting;
	int DangerLevel;

public:
	Carnivores(int huntingLevel, int dangerLevel)
	{
		Hunting = huntingLevel;
		DangerLevel = dangerLevel;
	};
	void ShowHuntingLevel() {
		switch (Hunting)
		{
		case 0: cout << HuntingLevelMessage << "Low\n"; break;
		case 1: cout << HuntingLevelMessage << "Medium\n"; break;
		case 2: cout << HuntingLevelMessage << "High\n"; break;
		case 3: cout << HuntingLevelMessage << "Professional\n"; break;
		default:
			cout << "Something wrong with hunting level\n"; break;
		}
	};
	void ShowDangerLevel() {
		cout << "The danger level is: " << DangerLevel;
	};

};