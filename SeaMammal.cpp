#include "SeaMammal.h"

SeaMammal::SeaMammal(string name, string sound) : Mammal(name, sound)
{

}

string SeaMammal::moves()
{
	return "swim";
}

void SeaMammal::output()
{
	cout << "Name: " << name << ". " << "Kind: SeaMammal. Class: Mammal." << endl;
}
