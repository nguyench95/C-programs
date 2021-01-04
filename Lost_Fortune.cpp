#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
	const int GOLD_PIECES = 900;
	int adventurers, killed, survivors;
	string leader;

	char again = 'y';

	while (again == 'y') {

		//game intro
		cout << "Welcome to Lost Fortune\n\n";
		cout << "Please enter the following for your personalized adventur\n";

		cout << "Enter a number: ";
		cin >> adventurers;

		cout << "Enter a smaller number: ";
		cin >> killed;

	
			while (killed >= adventurers) {
				cout << "I said, enter a smaller number: "
				cin >> killed;
			}
		
		survivors = adventurers - killed;

		cout << "Enter your last name: ";
		cin >> leader;

		//creating the story

		cout << "\nA brave group of " << adventurers << "set out on a quest ";
		cout << "-- in search of the lost treasure of the Ancient Dwarves. ";
		cout << "The group was led by that legendary rogue, " << leader << ".\n";
		cout << "\nAlong the way, a band of marauding ogres ambushed the party. ";
		cout << "All fought bravely under the command of " << leader;
		cout << ", and the ogres were defeated, but at a cost. ";
		cout << killed << "of the adventurers had fallen in battle, ";
		cout << "which led only " << survivors << " remaining in the party. ";

		cout << "\nThe party was about to give up all hope. ";
		cout << "But as they laid the fallen to rest, they came upon the buried lost treasure.";
		cout << "They counted the gold and the coins numbered over " << GOLD_PIECES << "!! ";
		cout << leader << " would hold onto the extra " << (GOLD_PIECES%survivors);
		cout << " pieces. This counted his fortune at over " << ((GOLD_PIECES / survivors) + (GOLD_PIECES%survivors)) << " gold pieces. ";
		cout << leader << " led the party back, and declared that they would take a shortcut through the Kragash Mountains. ";
		cout << "The " << survivors << " adventurers were wary as the mountain paths were treacherous, ";
		cout << "but they trusted the magnanimous " << leader << " and followed suite. ";
		cout << "Up the Kragash Mountains, mysterious occurances transpired. ";
		cout << "Adventurers fell ill sporatically. One by one they fell over and expired.";
		cout << "They dropped, over and over, dying one by one the closer they reacheed to the end of pass. ";
		cout << "Until lastly, " << leader << " and only one other adventurer was left. ";
		cout << "And as they buried the last of their comrades, the famed " << leader << " turned to their companion...\n";
		cout << ".... and stabbed him.\n";
		cout << "One by one " << leader << " had poisoned the adventurers, letting them die during the slow trek through the mountains. ";
		cout << "Once they saw the treasure, they wanted every last coin for their own. ";
		cout << "And without burying the last adventurer, " << leader << " pocketed his share of the coin and walked away to return home a hero. ";
		cout << "But I know the truth\n";
		cout << "I remember everything\n";
		cout << "I didn't die back there\n";
		cout << "And I'm coming for you... " << leader << ".................";


		cout << "\nWould you like to restart?(y/n): "; //return to start of the program while again=yes;
		cin >> again;
	}

	cout << "\nUntil next time.... ";

	return 0;
}