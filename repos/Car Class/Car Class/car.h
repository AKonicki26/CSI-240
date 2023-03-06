#pragma once
#include <string>

using namespace std;

class Car {

public:

	//Constructors
	Car();
	Car(int year, string make);

	//Getter Functions
	int getYear();
	string getMake();
	int getSpeed();

	void accelerate();

	//Called this because break is a keyword
	void brake();

private:

	int year;
	string make;
	int speed;

};