#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main() {
	int a = 0, b = 0, oper = 0;
	cout << "Enter a number for a =";
	cin >> a;
	cout << "Enter a number for b = ";
	cin>> b;
	cout << "Choose operator:";
	cin>> oper;

	switch (oper) {
		case 1:
			cout << "a = " << ++a << " b = " << ++b << endl; 
			break;
		case 2:
			cout << "a = " << --a << " b = " << --b << endl;
			break;
		case 3:
			cout << a + b << endl;
			break;
		case 4:
			cout << a - b << endl;
			break;
		case 5:
			cout << a * b << endl;
			break;
		case 6:
			cout << a / b << endl;
			break;
		case 7:
			cout << "a = " << abs(a) << " b = " << abs(b) << endl;
			break;
		case 8:
			cout << a % b << endl;
			break;
		case 9:
			cout << pow(a, b) << endl;
			break;
		default:
			cout << "Invalid operation!" << endl;
	}

	return 0;
}