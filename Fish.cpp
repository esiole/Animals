#include "Fish.h"

Fish::Fish(string name) : Animal(name)
{

}

string Fish::moves()
{
	return "swim";
}

string Fish::sound()
{
	return "nothing";
}

void Fish::output()
{
	cout << "Name: " << name << ". " << "Kind: Fish. Class: Animal." << endl;
}
