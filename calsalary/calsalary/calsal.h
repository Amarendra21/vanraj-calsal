#ifndef calsal_h
#define calsal_h
#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

class employee 
{
protected:
	static int count;
	int empid;
	double salary;
	char* name;

public:
	employee();
	virtual void accept();
	static int getcount()
	{
		return count;
	}
	virtual void display();
	virtual void calsal() = 0;
};
#endif