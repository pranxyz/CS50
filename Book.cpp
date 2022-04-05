#include "function-1-1.h"
#include <iostream>

using namespace std;

Meerkat::Meerkat()
{
	name = "";
	age = 0;
}

Meerkat::Meerkat (string pname, int page)
{
	pname = name;
	page = age;
}

string Meerkat::getName() const
{
	return name;
}

int Meerkat::getAge() const
{
	return age;
}

void Meerkat::print()
{
	cout << "Name : " << name << endl;
	cout << "Age : " << age << endl;
}

void Meerkat::setName()
{
	cout << "What is the name" << endl;
	cin >> name;
}

void Meerkat::setAge()
{
	cout << "What is the age" << endl;
	cin >> age;
}