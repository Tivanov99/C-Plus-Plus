#pragma once
#include <string>
#include <format>
#include <exception>
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
	int ValidateMenuSelection(string value) {
		try
		{	
			int userChoice = stoi(value);
			if (userChoice < 1 || userChoice > 2) {
				throw std::out_of_range("The number must be one of the ones shown above.\n");
			}
			return userChoice;
		}
		catch (const std::exception& ex)
		{
			string value = typeid(ex).name();
			if (value._Equal("class std::out_of_range")) {
				cout << ex.what();
			}
			else {
				cout << "\nInvalid choice (Value must be number)! Try again!\n";
			}
		}
		return -1;
	};
};

