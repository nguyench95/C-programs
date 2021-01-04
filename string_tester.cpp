//String Tester

#using namespace std;
#include <string>

using namespace std;

int main() {

	string world1 = "Game";
	string word2("Over");
	string word3(3, '!');

	string phrase = word1 + " " + word2 + word3; //combining three string objects for a new phrase
	cout << "The phrase is: " << phrase << "\n\n";

	cout << "The phrase has " << phrase.size() << " characters in it.\n\n";

	cout << "The character at position o is: " << phrase[0] << "\n\n";

	cout << "Changing the character at position 0.\n";
	phase[0] = 'L';
	cout << "The phrase is now: " << phrase << "\n\n";

	for (unsigned int i = 0; i < phrase.size(); ++i) { //going through each character in the string object
		cout << "Character at position " << i << " is: " << phrase[i] < , endl;
	}

	cout << "\nThe  sequence 'Over' begins at location ";

	cout << phrase.find("Over") << endl;

	if (phrase.find("eggplant") == string::npos) { //usind "find" to see if a specific phrase exists in the string 
		cout << " 'eggplant' is not in the phrase.\n\n";
	}

	phrase.erase(4, 5);
	cout << "The phrase is now: " << phrase << endl; //new phrase is now "Lame!!!"

	phrase.erase();
	cout << "The phrase is now: " << phrase << endl; //new phrase is "Lame"

	if (phrase.empty()) {
		cout << "\nThe phrase is no more.\n";
	}
	return 0;
}