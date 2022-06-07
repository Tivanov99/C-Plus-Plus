// OppTrainingC++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Vehicle {
public:
	void Accelerate() {
		cout << "Accelerating\n";
	};
	void Brake() {
		cout << "Braking\n";
	};
	void EngineStart() {
		cout << "Engine Starts\n";
	}
	void EngineStop() {
		cout << "Engine Stops\n";
	}
};
class FourDrive {
public:
	void TurnOnFourDrive() {
		cout << "Four Drive";
	}
};

class Car : public Vehicle, public FourDrive {
	public:
		Car(int horsePower)
		{
			HorsePower = horsePower;
		}
		~Car() {
			cout << "The object is destroyed\n";
		};
	string Model;
	int HorsePower;
};

int main()
{
	Car car(231);
	cout <<car.HorsePower << "\n";

	Car secondCar(car);
	cout << secondCar.HorsePower << "\n";

	car.HorsePower = 999;

	cout << car.HorsePower << " This is the first car" << "\n";

	cout << secondCar.HorsePower << " This is the second car" << "\n";

}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
