#include <bits/stdc++.h>
using namespace std;

class Game {
	public:
		Game();
		void start();
};

// This is the game constructor which decribes the game to the player
Game::Game() {
	cout << "\nGuess a number between 1 to 100\n\n";
	cout << "I will guess the number you guessed in atmost 7 times using my magical power\n";
	int c, d;
   	for (c = 1; c <= 32767; c++)
       		for (d = 1; d <= 32767; d++) {}
	cout << "\nIf you have guessed press enter:\n";
	cin.ignore();
}

// This is main body of the game
void Game::start() {
	int i = 1, high = 100, low = 0, mid;
	string s;
	// this loop used binary search to guess the number that the player thought
	while(1) {
		mid = (low+high)/2;
		cout << "\n********************************************************************\n";
		cout <<	"Guess " << i << ": ";
		cout << mid << "\n";
		cout << "\n********************************************************************\n";
		cout << "1. Type (yes) if this is the number you guessed\n";
		cout << "2. Type (smaller) if the number you guessed is smaller\n";
		cout << "3. Type (larger) if the number you guessed is larger\n";
		cout << "\n";
		cin >> s;
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		if(s == "yes") {
			cout << "\nHurray! I told you I will guess the number within 7 times\n";
			break;
		}
		else if(s == "smaller") {
			high = mid-1;
			i++;
		}
		else if(s == "larger") {
			low = mid+1;
			i++;
		}
		else {
			cout << "\nYour input string is invalid\n";
		}
	}
}

int main() {
	
	Game g1;
	g1.start();
	return 0;
}
