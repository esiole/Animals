#include "TerreMammal.h"

TerreMammal::TerreMammal(string name, string sound) : Mammal(name, sound)
{

}

string TerreMammal::moves()
{
	return "run";
}

void TerreMammal::output()
{
	cout << "Name: " << name << ". " << "Kind: TerreMammal. Class: Mammal." << endl;
}
