//arithmatic operations with variables

#include <iostream>
using namespace std;

int main() 
{
	unsigned int score = 5000;
	cout << "score: " << score << endl;

	score = score + 100; //add 100 to variable
	cout << "score: " << score << endl;

	score += 100; //alternate way to add to variable
	cout << "score: " << score << endl;

	//increment operators
	int lives = 3;
	++lives;
	cout << "lives: " << lives << endl;

	lives = 3;
	lives++;
	cout << "lives: " << lives << endl;

	lives = 3;
	int bonus = ++lives * 10;
	cout << "lives, bonus = " << lives << "," << bonus << endl;

		return 0;

}