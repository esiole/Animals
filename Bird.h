#pragma once

#include "Animal.h"

class Bird : public Animal
{
public:
	Bird(string);
	string moves() override;
	string sound() override;
	void output() override;
};

