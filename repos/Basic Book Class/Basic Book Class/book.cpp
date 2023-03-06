#include "book.h"


Book::Book(const string& name, Type type, int pages, float ounces) {
	bName = name;
	bType = type;
	bPages = pages;
	bOunces = ounces;
}

//return a string with all the info for the book
string Book::formatReportLine() {

	stringstream output;

	output << left << setw(42) << getName()
		<< left << setw(15) << getTypeName()
		<< left << setw(11) << getPages()
		<< getWeightLbs() << " lbs" << endl;

	return output.str();

}  

//calculate and return the weight of the book in lbs
float Book::getWeightLbs() {
	return float(getOunces() / 16.0);
}  

//return the string which correlates with the book type
string Book::getTypeName() {

	if (bType == -1) {
		return "UNKNOWN";
	}

	return TYPE_WORDS[bType];
}
