#include <iostream>

#include "Animal.h"

int main() {
	Turtle turtle_friend;
	Yamcha yamcha_1; 

	std::cout << turtle_friend.MakeSound() << std::endl;
	bluebird bird_a;
	std::cout << bird_a.MakeSound() << std::endl;
	std::cout << yamcha_1.MakeSound() << std::endl; 

	return 0;
}
