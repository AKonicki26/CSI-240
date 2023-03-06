//
//  functions.cpp
//  lab1
//
//
//  Modified by: Murat K. Gungor, Anne Konicki
//  Thanks to Brian R. Hall
//


#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
#include "functions.h"

//Delete Later
#include <iostream>

using namespace std;


int loadLanguages( const string& filename, string names[], int maxLanguages )
{

	cout << "Loading names array" << endl;
	int numNames = 0;
   
	ifstream input(filename);

	if( input.is_open() )
	{
		
		while( !input.eof() && numNames < maxLanguages )
		{
			
			getline( input, names[numNames] );
			numNames++;
		}
		input.close();
	}
	cout << numNames;
	return numNames;
}


bool loadInfo( const string& filename, int infoArray[][INFO], int numLanguages)
{
	// just a stub
   // modify to load the 2D array (infoArray) with the data stored in info.txt

	cout << "loading info array";
	
	ifstream input(filename);
	if (input.is_open()) {
		for (int i = 0; i < numLanguages - 1; i++) {

			if (input.eof()) { break; }

			input >> infoArray[i][0];
			input >> infoArray[i][1];
		}
	}
	else { return false; }
   
   return true;
}


string formatReportLine( int languageRank, int infoArray[][INFO], string names[] )
{
	// just a stub
   // modify to build each output line for each language, and align the output so its organized
   // hint: to return a string that concatenates strings and ints, use a stringstream
   
	stringstream output;

	output << setw(15) << left << names[languageRank] << setw(10) << left << languageRank << infoArray[languageRank][1] << endl;

   return " ";
}