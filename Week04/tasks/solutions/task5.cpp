#include <iostream> 

using namespace std;

int main() {
	int card = 0;
	cin >> card;

	switch (card % 13) {
		case 0:
			cout << "A"; 
			break;
		case 1:
			cout << "2";
			break;
		case 2:
			cout << "3";
			break;
		case 3:
			cout << "4";
			break;
		case 4:
			cout << "5";
			break;
		case 5:
			cout << "6";
			break;
		case 6:
			cout << "7";
			break;
		case 7:
			cout << "8";
			break;
		case 8:
			cout << "9";
			break;
		case 9:
			cout << "10";
			break;
		case 10:
			cout << "J";
			break;
		case 11:
			cout << "Q";
			break;
		case 12:
			cout << "K";
	}
	switch (card / 13) {
		case 0:
			cout << " Spades" << endl;
		case 1:
			cout << " Clubs" << endl;
			break;
		case 2:
			cout << " Diamonds" << endl;
			break;
		case 3:
			cout << " Hearts" << endl;
			break;
	}
	return 0;
}