#include "market.h"

int main() {

	Product apple("Red Delicious", 2.66);
	//apple.printInfo();

	Product tv("Samsung TV", 234.34);
	//tv.printInfo();

	Product glass("Corning Glass", 0);
	//glass.printInfo();

	Basket myBasket;
	myBasket.addProduct(apple);
	myBasket.addProduct(tv);
	myBasket.addProduct(glass);
	

	myBasket.printBasketContent();

	
}