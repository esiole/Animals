#include "Mammal.h"

Mammal::Mammal(string name, string words) : Animal(name)
{
	this->words = words;
}

string Mammal::sound()
{
	return words;
}
