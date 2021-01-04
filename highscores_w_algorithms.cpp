#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	vector<int>::const_iterator iter;

	cout << "Creating a list of scores. \n";
	vector<int> scores; //vector to store score values
	scores.push_back(1500);
	scores.push_back(3500);
	scores.push_back(7500);

	cout << "High Scores: \n";

	for (iter = scores.begin(); iter != scores.end(); ++iter) { //cycle through all the values in the vector and display it
		cout << *iter << endl;
	}

	cout << "\nFinding a score. \n";
	int score;
	cout << "\nEnter a score to find: "; //asking user input and stores value in int score(not the vector scores)
	cin >> score;

	iter = find(scores.begin(), scores.end(), score); //compares the user input to the stored values.
	if (iter != scores.end()) {
		cout << "Score found. \n";
	}
	else {
		cout << "Scores not found.\n";
	}
	//randomiz the scores
	cout << "Randomizing scores: \n";
	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(scores.begin(), scores.endl());

	cout << "High Scores: \n"; //displays the randomized vector
	for (iter = scores.begin(); iter != scores.end(); ++iter) { 
		cout << *iter << endl;
	}

	//sorting algorithm
	cout << "\nSorting scores.\n";

	sort(scores.begin(), scores.end()); //sorts from highest to lowest
	cout << "High Scores: \n"; //displays the values in descending order
	for (iter = scores.begin(); iter != scores.end(); ++iter) { //cycle through all the values in the vector and display it
		cout << *iter << endl;
	}

	return 0;
}