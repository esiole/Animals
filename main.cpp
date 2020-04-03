#include <iostream>
#include "Fish.h"
#include "Bird.h"
#include "SeaMammal.h"
#include "TerreMammal.h"

using std::cout;
using std::endl;

int main()
{
	Fish shark("shark");
	shark.output();
	cout << shark.moves() << endl << shark.sound() << endl;
	cout << "*******************************************" << endl;
	Bird eagle("eagle");
	eagle.output();
	cout << eagle.moves() << endl << eagle.sound() << endl;
	cout << "*******************************************" << endl;
	SeaMammal whale("whale", "brrrrr!");
	whale.output();
	cout << whale.moves() << endl << whale.sound() << endl;
	cout << "*******************************************" << endl;
	TerreMammal firstDog("firstDog", "Gav!");
	firstDog.output();
	cout << firstDog.moves() << endl << firstDog.sound() << endl;
	cout << "*******************************************" << endl;
	TerreMammal secondDog("secondDog", "GavGavGav!");
	secondDog.output();
	cout << secondDog.moves() << endl << secondDog.sound() << endl;
	cout << "*******************************************" << endl;
	cout << endl << endl << endl << endl;

	Animal* array[5];
	array[0] = &shark;
	array[1] = &eagle;
	array[2] = &whale;
	array[3] = &firstDog;
	array[4] = &secondDog;
	for (Animal* animal : array)
	{
		cout << animal->moves() << endl;
		cout << animal->sound() << endl;
		animal->output();
		cout << "*******************************************" << endl;
	}
}
