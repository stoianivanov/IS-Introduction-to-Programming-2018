#include <iostream>
using namespace std;

int main()
{
	int age;
	cin >> age;

	int days;
	double hours;
	double minutes;
        double seconds;

	days = age * 365;
	hours = days * 24;
	minutes = hours * 60;
	seconds = hours * 3600;

	cout << "Days,hours, minutes and seconds that the person is lived uppon the given years: "<<endl;
        cout << " days:" << days <<endl;
        cout << " hours:" << hours <<endl;
        cout << " minutes:" << seconds<<endl; 

	return 0;

}

