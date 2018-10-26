#include <iostream>

using namespace std;

int main() {
	int n = 0;
	cin >> n;
	switch (n) {
		case 0:
			cout << "Antarctica" << endl;
			break;
		case 1:
			cout << "Africa" << endl;
			break;
		case 2:
			cout << "Asia" << endl;
			break;
		case 3:
			cout << "Europe" << endl;
			break;
		case 4:
			cout << "North America" << endl;
			break;
		case 5:
			cout << "Australia" << endl;
			break;
		case 6:
			cout << "South America" << endl;
			break;
		default:
		    cout << "Invalid number";
	}

	return 0;
}