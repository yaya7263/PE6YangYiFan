#include <iostream>

#include "Animal.h"

int main() {
	Turtle turtle_friend;

	std::cout << turtle_friend.MakeSound() << std::endl;
	bluebird bird_a;
	std::cout << bird_a.MakeSound() << std::endl;

	return 0;
}
