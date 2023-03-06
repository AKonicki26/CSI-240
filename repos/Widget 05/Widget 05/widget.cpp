// Anne Konicki

#include "widget.h"

int Widget::IDCount = 1;

Widget::Widget(WidgetType type){
	ID = IDCount;
	this->type = type;
	generateModelName();
}
//add copy constructor

Widget::Widget(const Widget& rhs){
	ID = IDCount;
	this->type = rhs.type;
	generateModelName();
}

void Widget::generateModelName(){
	IDCount++;

	modelName << left 
		<< setw(15) << WIDGET_NAMES[type] 
		<< setw(5) << ID 
		<< this;
}

