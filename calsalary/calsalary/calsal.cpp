#include "calsal.h"
int employee::count = 0;
employee::employee()
{
	count++;
	this->empid = count;
	this->salary = 0;
	name = new char[1];
	strcpy(name, "\0");
}

void employee::accept()
{
	this->empid = count;
	char name[20];
	cout << "Enter name::\n";
	cin >> name;
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
	cout << "enter salary::\n";
	cin >> salary;
}

void employee::display()
{
	cout << empid << "\t" << name << "\t" << salary << "\n";
}
