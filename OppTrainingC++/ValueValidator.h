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
	void ValidateString(string valueName, string value, int minLenght, int maxLenght) {
		if (value == "" || value == " " || value.length() < minLenght || value.length() > maxLenght
			|| empty(value)) {
			throw invalid_argument("(Invalid " + valueName + "!)\n");
		}
	};
	void ValidateInt(string valueName, string value, int minValue, int maxValue) {
		int parsedValue;
		try
		{
			 parsedValue = stoi(value);
		}
		catch (const std::exception&)
		{
			throw invalid_argument("(Invalid '" + valueName + "'  should be number!)\n");
		}

		if (parsedValue <minValue || parsedValue > maxValue) {
			throw invalid_argument("(Invalid " + valueName + "! Not in range.)\n");
		}
	};
	void ValidateDouble(string valueName, string value, double minValue, double maxValue) {
		double parsedValue;
		try
		{
			parsedValue = stoi(value);
		}
		catch (const std::exception&)
		{
			throw invalid_argument("(Invalid '" + valueName + "'  should be number!)\n");
		}

		if (parsedValue <minValue || parsedValue > maxValue) {
			throw invalid_argument("(Invalid " + valueName + "! Not in range.)\n");
		}
	};
};

