//Word Jumble game

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	enum fields(WORD, HINT, NUM_FIELDS);
	const int NUM_WORDS = 5;
	const string WORDS[NUM_WORDS][NUM_FIELDS] =
	{
		{"wall", "Do you feel you're banging your head againsdt something?"},
		{"glasses", "These might help you see the answer"},
		{"labored". "Going slowly, is it?"},
		{"persistent", "Keep at it."},
		{"jumble", "What the game is all about."}
	};

	//selecting a random word
	srand(static_cast<unsigned int>(time(0)));
	int choice = (rand() % NUM_WORDS);
	string theWord = WORDS[choice][WORD]; //word to guess
	string theHint = WORDS[choice][HINT]; //hint

	//jumbling the word
	string jumble = theWord; //jumbled version of word
	int length = jumble.size();
	for (int i = 0; i < length; i++) {
		int index1 = (rand() % length);
		int index2 = (rand() % length);
		char temp = jumble[index1];
		jumble[index1] = jumble[index2];
		jumble[index2] = temp;
	}

	cout << "\t\t\tWelcome to Word Jumble!\n\n";
	cout << "Unscrambl the letters to make a word.\n";
	cout << "Enter 'hint' for a hint.\n";
	cout << "Enter 'quit' to quit the game.\n\n";
	cout << "The jumble is: " << jumble;

	string guess;
	cout << "\n\nYour guess: "; //looking at player's guess and storing in string guess
	cin >> guess;

	while ((gues != theWord) && (guess != "quit")) { //checks player input and responds accordingly
		if (guess == "hint") { //sees the player asking for a hint
			cout << theHint;
		}
		else {
			cout << "Wrong. "; 
		}
		cout << "\n\nYour guess: "; //repeats
		cin >> guess;
	}

	if (guess == theWord) { //player input matches the answer
		cout << "\nThat's it! You guessed it!\n";
	}

	cout << "\nThanks for playing.\n";

	return 0;
}