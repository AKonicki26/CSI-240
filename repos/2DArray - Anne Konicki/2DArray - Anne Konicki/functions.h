//Author: Anne Konicki
//Class : CSI 140-03
// Assignment : Module-01-Lab Assignment 1 - 2D Array 
// Date Assigned : 
// Due Date : 1/26/2023, 11:59 pm
// Description :
// Write two functions to read and report on a 2D array of programming language “rankings.
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



//  functions.h
//  lab1
//
//  Modified by: Murat K. Gungor 
//  Thanks to Brian R. Hall
//

#ifndef __lab1__functions__
#define __lab1__functions__

#include <string>

using namespace std;

const int INFO = 2;

//load language names from a file into the names array - return number of languages read
int loadLanguages( const string& filename, string names[], int maxLanguages );

//load language info from a file into a 2d array of ints, return true if successfully processed
bool loadInfo( const string& filename, int infoArray[][INFO], int numLanguages);

//formats and returns a string which contains the language name and the info for
//a particular language (indicated by languageRank)
string formatReportLine( int languageRank, int infoArray[][INFO], string names[] );

#endif /* defined(__lab1__functions__) */
