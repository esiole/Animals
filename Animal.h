#pragma once

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Animal
{
protected:
	string name;
public:
	Animal(string);
	virtual string moves() = 0;
	virtual string sound() = 0;
	virtual void output() = 0;
};

