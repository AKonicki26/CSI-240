#include "market.h"


//Product Functions
Product::Product() {
	price = 0.0;
	name = "Name not set";
}

Product::Product(string name, float price = 0) {
	this->price = price;
	this->name = name;
}

void Product::printInfo() {

	cout << left << setw(15) << name;
	cout << right << setw(8) << setprecision(2) << fixed << price;
	cout << setw(10) << getPriceAfterTax() << endl;
}

float Product::getPriceAfterTax() { return price + price * 0.06; }

//Basket 

Basket::Basket() {
	itemCount = 0;
}

void Basket::printBasketContent() {
	for (int i = 0; i < 3; i++) {
		shoppingList[i].printInfo();
	}
}

void Basket::addProduct(Product& product) {
	shoppingList[itemCount] = product;
	itemCount++;
}