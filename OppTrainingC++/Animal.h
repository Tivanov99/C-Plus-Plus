#pragma once
#include <string>
#include <iostream>
using namespace std;

class Animal {
public:
	Animal(string name) {
		Name = name;
	};
	Animal(string name, int age) {
		Name = name;
		Age = age;
	};
	void SayHello() {
		cout << "Hello\n";
	}
	string GetName() {
		return Name;
	}
	int GetAge() {
		return Age != 0 ? Age : 0;
	}
	virtual void SayYouName() = 0;
	~Animal() {

	};
private:
	string Name;
	int Age;
	bool Vaccinated;
};

