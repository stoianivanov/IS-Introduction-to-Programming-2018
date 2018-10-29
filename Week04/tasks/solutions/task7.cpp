#include <iostream>

using namespace std;

int main() {
	int n = 0;
	cin >> n;

	switch (n) {
		case 1:
			cout << "Mercury" << endl;
			break;
		case 2:
			cout << "Venus" << endl;
			break;
		case 3:
			cout << "Earth" << endl;
			break;
		case 4:
			cout << "Mars" << endl;
			break;
		case 5:
			cout << "Jupiter" << endl;
			break;
		case 6:
			cout << "Saturn" << endl;
			break;
		case 7:
			cout << "Uranus" << endl;
			break;
		case 8:
			cout << "Neptune" << endl;
			break;
		case 9:
			cout << "Pluto" << endl;
			break;
		default:
			cout << "Invalid input" << endl;
	}

	return 0;
}