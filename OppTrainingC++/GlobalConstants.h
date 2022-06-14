#pragma once
using namespace std;
#include <string>
#include <iostream>
#include "HuntingLevel.cpp"
class GlobalConstants
{
public:
	static const string OptionalAnimalParameterMessage;
	GlobalConstants()
	{
		OptionalAnimalParameterMessage="This parameter is optional, if you don't want to fill just write '-1'\n";
	}
};

