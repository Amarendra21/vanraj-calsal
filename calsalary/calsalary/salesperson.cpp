#include "salesperson.h"

salesperson::salesperson()
{
	this->salary = 0;
	this->comm = 0;
	name = new char[1];
	strcpy(name, "\0");
}

void salesperson::accept()
{
	employee::accept();
	cout << "Enter commision\n";
	cin >> comm;
}

void salesperson::calsal()
{
	this->salary = salary + comm;
}

void salesperson::display()
{
	cout << empid << "\t" << name << "\t" << salary << "\n";
}
