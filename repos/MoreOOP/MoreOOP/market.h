#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

class Product {
public:

	//Default Constructor
	Product();
	//The constructor we actually use
	Product(string name, float price);
	//Print all the info from the product
	void printInfo();

private:
	float getPriceAfterTax();
	float price;
	string name;
};

class Basket {
public:

	Basket();

	void printBasketContent();

	void addProduct(Product& product);

private:
	int itemCount;
	Product shoppingList[3];
};