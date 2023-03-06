////Author: Anne Konicki
//Class : CSI 140-03
// Assignment : Module-02-Lab Assignment 3 - Basic Book Class
// Date Assigned : 1/26/2023
// Due Date : 2/6/2023, 11:59 pm
// Description :
// Create a Book class, read file containing book info, then generate a report
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

//
//  main.cpp
//  lab3
//
//
//  Modified by: Murat K. Gungor , Anne Konicki
//  Thanks to Brian R. Hall
//

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "book.h"

using namespace std;

int main()
{
	const string FILENAME("books.txt");
   
	ifstream input(FILENAME);
   
	if( input.good() )
	{

		cout << left << setw(40) << "Title:" << "| " 
			<< left << setw(13) << "Type: " << "| " 
			<< left << setw(10) << "Pages: " << "|" 
			<< "Weight:" << endl;
		while( !input.eof() )
		{
			string name;
			int type;
			int pages;
			float ounces;
			getline( input, name );
			input >> type >> pages >> ounces;
			input.ignore(INT_MAX, '\n');  //ignore the newline char at the end of the line
         
			//create Book object here!
			Book book(name, static_cast<Type>(type), pages, ounces);
         
			//write out report line for movie here!
			
			cout << book.formatReportLine();
         
		}
	}
	else
	{
		cout << "File not found: " << FILENAME << endl;
	}
   
	system("pause");
	return 0;
}