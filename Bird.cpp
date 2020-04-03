#include "Bird.h"

Bird::Bird(string name) : Animal(name)
{

}

string Bird::moves()
{
	return "fly";
}

string Bird::sound()
{
	return "Chirp!";
}

void Bird::output()
{
	cout << "Name: " << name << ". " << "Kind: Bird. Class: Animal." << endl;
}
