//Author: Anne Konicki
//Class : CSI 240-02
// Assignment : Module-03-Programming-Assignment-2-House Building 
// Date Assigned : 2/2/2023
// Due Date : 2/8/2023
// Description :
// Choose member data, implement missing functions, 
// and add new private functions as needed to the house class
// Certification of Authenticity :
//I certify that this is entirely my own work, except where I have given fully documented
// references to the work of others.I understand the definition and
// consequences of plagiarism and acknowledge that the assessor of this assignment
// may, for the purpose of assessing this assignment :
// -Reproduce this assignment and provide a copy to another member of
// academic staff; and / or
// - Communicate a copy of this assignment to a plagiarism checking service
// (which may then retain a copy of this assignment on its database for
// the purpose of future plagiarism checking)


#include <fstream>
#include <iostream>
#include <string>

#include "Room.h"
#include "House.h"

using namespace std;


int main()
{
	ifstream inFile( "HouseDriver.txt" );

	House theHouse;

	if( inFile.good() )
	{
		while( !inFile.eof() )
		{
			//read data
			int type;//kitchen/bathroom/bedroom/ etc.
			inFile >> type;

			int width, breadth;//floor dimensions - in feet
			int height;//ceiling height - in feet
			inFile >> width >> breadth >> height;

			//create Room
			Room newRoom( (RoomType)type, width, breadth, height );

			//report on room
			cout << "Room to Add:\n" << newRoom.getDescription();

			//add room to the house
			bool successful = theHouse.addRoom( newRoom );

			if( !successful )
			{
				cout << "\nRoom could not be added!!!\n\n";
			}

			//report on the house
			cout << theHouse.getDescription();

			system("pause");
			system("cls");
		}
		cout << theHouse.enumerateRooms();
	}
	else
	{
		cout << "File not found!\n";
	}
	system( "pause" );
}

