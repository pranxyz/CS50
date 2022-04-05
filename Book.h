#ifndef MEERKAT_H_INCLUDED
#define MEERKAT_H_INCLUDED

#include <string>
#include <iostream>
using namespace std;

//Write a program to read a user's input and store it in the class object below.

class Meerkat
{
	public:
		Meerkat();
		Meerkat(string pname, int page);
		string getName() const;
		void setName();
		void setAge();
		int getAge() const;
		void print();

	private:
		string name;
		int age; //If 0 is unknown.
};

#endif // MEERKAT_H_INCLUDED 