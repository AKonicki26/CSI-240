#include <sstream>
#include "House.h"

using namespace std;

House::House()
{
	roomIndex = 0;
	//stub
}

//return false if room has too low a height, too small an area or the house already is at max for that type of room
bool House::addRoom( const Room& theRoom )
{

	if (theRoom.getHeight() < MIN_HEIGHT) { return false; }
	if (theRoom.getSquareFootage() < MIN_AREA) { return false; }


	if (theRoom.getType() == KITCHEN) {
		if (getNumKitchens() >= MAX_KITCHENS) { return false; }
	}
	else if (theRoom.getType() == BATHROOM) {
		if (getNumBathrooms() >= MAX_BATHROOMS) { return false; }
	}
	else if (theRoom.getType() == LIVINGROOM) {
		if (getNumLivingrooms() >= MAX_LIVINGROOMS) { return false; }
	}
	else if (theRoom.getType() == BEDROOM) {
		if (getNumBedrooms() >= MAX_BEDROOMS) { return false; }
	}
	else {
		return false;
	}

	//For some reason switch didn't work :/

	/*s
	switch (theRoom.getType()) {
	case KITCHEN:
		if (getNumKitchens() >= MAX_KITCHENS) {/*Debug/ cout << "Too many Kitchens" << endl; return false;  }
		break;
	case BATHROOM:
		if (getNumBathrooms() >= MAX_BATHROOMS) {/*Debug/ cout << "Too many Bathrooms" << endl; return false;
		break;
		}
	case LIVINGROOM:
		if (getNumLivingrooms() >= MAX_LIVINGROOMS) {/*Debug/ cout << "Too many Livingrooms" << endl; return false;
		break;
		}
	case BEDROOM:
		if (getNumBedrooms() >= MAX_BEDROOMS) {/*Debug/ cout << "Too many Bedrooms" << endl; return false;
		break;
		}
	default:
		cout << "Invalid Room ID" << endl;
		return false;
	} */

	rooms[roomIndex] = theRoom;
	roomIndex++;
	return true;
}

int House::getNumBedrooms()
{
	int bedrooms = 0;

	for (int i = 0; i < MAX_ROOMS; i++) {
		if ((rooms[i].getVolume() != 0) && (rooms[i].getType() == BEDROOM)) {
			bedrooms++;
		}
	}
	
	return bedrooms;
}

int House::getNumBathrooms()
{
	int bathrooms = 0;

	for (int i = 0; i < MAX_ROOMS; i++) {
		if ((rooms[i].getVolume() != 0) && (rooms[i].getType() == BATHROOM)) {
			bathrooms++;
		}
	}

	return bathrooms;
}

int House::getNumKitchens()
{
	int kitchens = 0;

	for (int i = 0; i < MAX_ROOMS; i++) {
		if ((rooms[i].getVolume() != 0) && (rooms[i].getType() == KITCHEN)) {
			kitchens++;
		}
	}

	return kitchens;
}

int House::getNumLivingrooms()
{
	int livingrooms = 0;

	for (int i = 0; i < MAX_ROOMS; i++) {
		if ((rooms[i].getVolume() != 0) && (rooms[i].getType() == LIVINGROOM)) {
			livingrooms++;
		}
	}

	return livingrooms;
}

int House::getTotalSquareFootage()
{
	int squareFeet = 0;

	for (int i = 0; i < MAX_ROOMS; i++) {
		squareFeet += rooms[i].getSquareFootage();
	}

	return squareFeet;
}

int House::getTotalVolume()
{
	int volume = 0;

	for (int i = 0; i < MAX_ROOMS; i++) {
		volume += rooms[i].getVolume();
	}

	return volume;

}

bool House::isValid()
{
	
	if (getNumKitchens() < MIN_KITCHENS) { return false; }
	
	if (getNumBathrooms() < MIN_BATHROOMS) { return false; }
	
	if (getNumLivingrooms() < MIN_LIVINGROOMS) { return false; }

	if (getNumBedrooms() < MIN_BEDROOMS) { return false; }
	
	//stub
	return true;
}

string House::enumerateRooms()
{
	//stub
	stringstream report;
	report << "These are the rooms in the house:\n";

	for (int i = 0; i < MAX_ROOMS; i++) {
		if (rooms[i].getVolume() == 0) { continue; }
		report << rooms[i].getDescription();
	}

	return report.str();
}

string House::getDescription()
{
	stringstream theStream;

	theStream	
		<< "House has:\n"
		<< getNumBedrooms() << " Bedrooms\n"
		<< getNumBathrooms() << " Bathrooms\n"
		<< getNumKitchens() << " Kitchens\n"
		<< getNumLivingrooms() << " Livingrooms\n\n"
		<< getTotalSquareFootage() << " Square feet total\n"
		<< getTotalVolume() << " Cubic feet total volume\n";

	if( isValid() )
	{
		theStream << "House is Valid!\n\n";
	}
	else
	{
		theStream << "House is not Valid!\n\n";
	}

	return theStream.str();
}