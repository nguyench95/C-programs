//Guess the number

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	srand(static_cast<unsigned int(time(0)));

	int secretNumber = rand() % 100 + 1; //generate random number between 1-100
	int tries = 0;
	int guess;

	cout << "\tWelcome to Guess My Number\n\n";

	do {
		cout << "Guess a number from 1-100: ";
		cin >> guess;
		++tries;

		if (guess > secretNumer) {
			cout << "Too high\n\n";
		}
		else if (guess < secretNumber) {
			cout << "Too low\n\n";
		}
		else {
			cout << "\nYou guessed right. You took " << tries << " guesses.\n";
		}
	} while (guess != secretNumber);

	return 0;
}