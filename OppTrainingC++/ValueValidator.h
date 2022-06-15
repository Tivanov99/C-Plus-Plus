#pragma once
#include <string>
#include <format>
#include <format>
using namespace std;


class ValueValidator
{
public:
	void ValidateString(string valueName ,string value, int minLenght, int maxLenght) {
		if (value == "" || value == " " || value.length() < minLenght || value.length() > maxLenght) {
			string error;
			error.append("Invalid ").append(valueName);
			throw(error);
		}
	};
};

