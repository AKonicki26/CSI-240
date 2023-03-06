#include "car.h"
#include <iostream>

int main(){

	Car myCar(1987, "Chevrolet");

	cout << "I am in my " << myCar.getYear() << " " << myCar.getMake() << endl << endl;

	cout << "Time to accelerate" << endl << endl;

	for (int i = 0; i < 5; i++) {
		myCar.accelerate();
		cout << "I am currently going " << myCar.getSpeed() << " mph" << endl;
	}

	cout << endl << "Time to slow down" << endl << endl;

	for (int i = 0; i < 6; i++) {
		myCar.brake();
		cout << "I am currently going " << myCar.getSpeed() << " mph" << endl;
	}
	cout << endl;


	return 0;
}