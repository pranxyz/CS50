#include "Person.h"
#include <iostream>

using namespace std;

Person::Person()
{
	name = "";
	salary = 0;
}

Person::Person (string pname, int page)
{
	pname = name;
	page = salary;
}

string Person::getName() const
{
	return name;
}

int Person::getSalary() const
{
	return salary;
}

void Person::print()
{
	cout << "Name : " << name << endl;
	cout << "Salary : " << age << endl;
}

void Person::setName()
{
	cout << "What is the name" << endl;
	cin >> name;
}

void Person::setSalary()
{
	cout << "What is the salary" << endl;
	cin >> salary;
}