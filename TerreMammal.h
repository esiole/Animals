#pragma once

#include "Mammal.h"

class TerreMammal : public Mammal
{
public:
	TerreMammal(string, string);
	string moves() override;
	void output() override;
};

