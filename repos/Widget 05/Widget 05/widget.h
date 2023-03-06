//
//  widget.h
//  widget
//
//
//  Modified by: Murat K. Gungor, Anne Konicki
//  Thanks to Brian R. Hall

//Author: Anne Konicki
//Class : CSI 240-02
// Assignment : 
// Date Assigned : 2/16/2023s
// Due Date : 2/22/2023 11:59pm
// Description :
// Complete the class definition and implement the functions of the Widget class.
// 
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


#ifndef __widget__widget__
#define __widget__widget__

#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

enum WidgetType
{
	INVALID_TYPE = -1,
	WEATHER,
	QUOTE,
	STOCK,
	NUM_WIDGET_TYPES
};


const string WIDGET_NAMES[NUM_WIDGET_TYPES] = {	"Weather2000",
   "Of-The-Day",
   "Ups-and-Downs"
};


class Widget
{
public:
	Widget( WidgetType type );
	//add copy constructor

	Widget(const Widget& rhs);
   
	string getModelName() const { return modelName.str(); };
   
private:
	WidgetType type;
	int ID;
	stringstream modelName;
   //add static data member
	static int IDCount;

	void generateModelName();
};


#endif /* defined(__widget__widget__) */
