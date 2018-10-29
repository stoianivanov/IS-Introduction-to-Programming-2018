#include <iostream>

using namespace std;

int main() {
	int num = 0;

	cin >> num;

	switch (num) {
		case 1:
			cout << "...." << endl;
			break;
		case 2:
			cout << "...-" << endl;
			break;
		case 3:
			cout << "..--" << endl;
			break;
		case 4:
			cout << "..---" << endl;
			break;
		case 5:
			cout << ".----" << endl;
			break;
		case 6:
			cout << "-..." << endl;
			break;
		case 7:
			cout << "--.." << endl;
			break;
		case 8:
			cout << "---.." << endl;
			break;
		case 9:
			cout << "----." << endl;
			break;
		case 0:
			cout << "-----" << endl;
			break;
		default:
		    cout  << "Incorrect input" << endl;
	}


	return 0;
}