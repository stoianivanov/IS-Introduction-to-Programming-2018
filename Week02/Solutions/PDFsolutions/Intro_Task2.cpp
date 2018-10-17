//Условие:
//Да се определи дали въведено цяло число се дели едновременно
//на 2 и на 3 и не се дели на 5
//........................................................................

#include <iostream>

using namespace std;


int main()
{
	int a;
	cin >> a;

	if((a % 2 == 0 && a % 3 == 0) && !(a % 5 == 0))
	{
        cout << "2 and 3 divide your number, but 5 doesn't divide it" << endl;
	}
	else
	{
        cout << "It in not true, that 2 and 3 divide your number, but 5 doesn't divide it" << endl;
	}

	return 0;
}
