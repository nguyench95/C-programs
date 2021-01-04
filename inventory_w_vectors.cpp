#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

	vector <string> inventory; //initialize basic empty vector

	//add three items into the vector
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");

	cout << "You have " << inventory.size() << "items.\n"; //see how many items are in the vector

	cout << "\nYour items:\n"; //display present items
	for (unsigned int i = 0; i < inventory.size(); ++i) {
		cout << inventory[i] << endl;
	}

	cout << "You trade your sword for a battleaxe. \n";

	inventory[0] = "battle axe"; //replace first item
	cout << inventory[0].size() << " letters in it.\n"; //how many letters is in the item

	cout << "The shield is destroyed in battle.\n";

	inventory.pop_back_back(); //remove last item in vector

	cout << "Removing all items.\n";
	inventory.clear(); //remove all items

	//check if there's anything in the inventory
	if (inventory.empty()) {
		cout << "\nYou have nothing.\n";
	}
	else { 
		cout << "\nYour items:\n"; //display present items

		for (unsigned int i = 0; i < inventory.size(); ++i) {
			cout << inventory[i] << endl;
		}
	}
}