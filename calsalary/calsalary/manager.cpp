
#include "manager.h"

manager::manager()
{
	this->salary = 0;
	this->extra = 0;
	name = new char[1];
	strcpy(name, "\0");
}

void manager::accept()
{
	employee::accept();
	cout << "Enter extra\n";
	cin >> extra;
}

void manager::calsal()
{
	this->salary = salary + extra;
}

void manager::display()
{
	cout << empid << "\t" << name << "\t" << salary << "\n";
}

void manager::forreal()
{
	cout << "yess bouy!!\n";
}
