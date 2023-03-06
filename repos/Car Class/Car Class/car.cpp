#include "car.h"


//Default Constructor
Car::Car() {
	year = 0;
	make = "Unknown";
	speed = 0;
}

//Constructor with params
Car::Car(int year, string make) {
	this->year = year;
	this->make = make;
	this->speed = 0;
}

//Getter functions
int Car::getYear() { return this->year; }
string Car::getMake() { return this->make; }
int Car::getSpeed() { return this->speed; }

void Car::accelerate() {
	speed += 5;
}

//Called this because break is a keyword
void Car::brake() {
	speed -= 5;
	if (speed < 0) {
		speed = 0;
	}
}

