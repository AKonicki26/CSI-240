#include <iostream>
using namespace std;

void pointerLoops();
void basicPointer();
void dynamicMemory();

int main() {
	basicPointer();
	pointerLoops();
	dynamicMemory();

	return 0;
}

//Dynamic Memory
void dynamicMemory() {
	string* ptr = nullptr;
	string name = "Anne";
	ptr = &name;

	/*
	Creates a new string in memory, declaring as

	string brand;
	ptrBrand = &brand;
	
	means that the memory used for that will always be used for that, even after I'm done using it
	*/
	
	string* ptrBrand = new string;
	cout << ptrBrand;

	//Why? Compile time. Making a ton of variables on compile is slow and bad
	//When declaring an array of an unknown size, you need to use dynamic memory
	//Compiler wants to know how much memory to allocate
	//Using new allocated more memory after it's done, so I can have an array of size unknown when compiling

	int size = 0;
	cout << "Enter an array size: ";
	cin >> size;

	int* ptrArray = new int[size];

	for (int i = 0; i < size; i++) {
		
	}


	//Alloes something else to use this space in memory
	delete ptrBrand;
	ptrBrand = nullptr;
}

//Looped Pointers
void pointerLoops() {

	cout << "\n\nLoopedPointers\n\n";

	string brands[] = { "Volvo", "GM", "Toyota" };

	string* ptrStr = brands;

	for (int i = 0; i < 3; i++) {
		cout << "Via Pointer: " << *(ptrStr + i) << endl;
	}

	/*cout << brands[0] << endl;
	cout << brands << endl;
	cout << *brands << endl;
	cout << *(brands + 1) << endl;
	cout << *(brands + 2) << endl << endl;*/

	for (int i = 0; i < 3; i++) {
		cout << "Brand: " << *(brands + i) << endl;
	}

}



//Starting Pointers


void basicPointer() {

	cout << "\n\nBasic Pointers\n\n";

	int score = 90;
	cout << score << endl;
	cout << &score << endl;

	int* ptrScore = nullptr;
	cout << "Size: " << sizeof(ptrScore) << endl;
	ptrScore = &score;
	cout << ptrScore << endl;
	cout << *ptrScore << endl;

}

