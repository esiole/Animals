#pragma once

#include "Animal.h"

class Fish : public Animal
{
public:
	Fish(string);
	string moves() override;
	string sound() override;
	void output() override;
};

