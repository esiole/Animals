#pragma once

#include "Animal.h"

class Mammal : public Animal
{
private:
	string words;
public:
	Mammal(string, string);
	string sound() override;
};

