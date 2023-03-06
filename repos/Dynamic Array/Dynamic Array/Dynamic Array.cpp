// Anne Konicki

#include "functions.h"

int main()
{
	//Given code
	srand(time(NULL)); // THIS LINE SHOULD BE CALLED ONLY ONCE - DON'T PLACE THIS INTO LOOP

	int size = promptSize();

	int* array = new int[size];

	fillArray(size, array);

	displayArray(size, array);

	sortArray(size, array);

	displayArray(size, array);

	
	
}
