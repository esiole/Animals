#pragma once

#include "Mammal.h"

class SeaMammal : public Mammal
{
public:
	SeaMammal(string, string);
	string moves() override;
	void output() override;
};

