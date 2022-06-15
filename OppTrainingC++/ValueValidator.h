#pragma once
#include <string>
#include <format>
#include <exception>
#include <string>
#include <iostream>
using namespace std;


class ValueValidator
{
public:
	void ValidateString(string valueName ,string value, int minLenght, int maxLenght) {
		if (value == "" || value == " " || value.length() < minLenght || value.length() > maxLenght
			|| empty(value)) {
			cout << "Invalid " << valueName <<".\n";
			throw("Invalid ",valueName);
		}
	};
};

