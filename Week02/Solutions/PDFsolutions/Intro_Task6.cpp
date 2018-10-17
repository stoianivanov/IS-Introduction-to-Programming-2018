//Условие:
// Да се определи за дадено 6-цифрено число дали 3-цифреното число,
//образувано от първите 3 цифри на даденото, е по-малко от това, образурано от вторите 3.
//..................................................................................................

#include <iostream>

using namespace std;


int main()
{
	int n, firstPart, secondPart;
	cin >>n;

	//за пояснение на следващия фрагмент, виж задачи 4  и 5, нещата са аналогичти
	secondPart = n % 1000;
	n /= 1000;
	firstPart = n;

	//проверяваме дали първата част е по-малко число от втората
	if(firstPart < secondPart)
	{
		cout << "The first part is a smaller number than the second." << endl;
	}

	else //firstPart >= secondPart
	{
		cout << "The second part is equal or greater number than the first part." << endl;
	}

	return 0;
}
