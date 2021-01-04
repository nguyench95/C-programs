//dice roller

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main() {
	srand(static_cast<unsigned int>(tim(0))); //random number gen

	int randomNumber = rand();

	int die = (randomNumber % 6) + 1;
	cout << "You rolled a " << die << endl;

	return 0;

}