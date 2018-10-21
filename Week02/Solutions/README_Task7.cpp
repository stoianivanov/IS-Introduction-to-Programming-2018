#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	
	
	int number;
        int k;
        cout<<"Enter a number:"
	cin >> number;
        cout<<"Enter k-digit of the number, you want to find:" >> k;
	if (k < 1)
	{
		cout << "Invalid input, try again:" << endl;
                cin >> k;
	}
	else
	{
		cout <<"The k-digit of the number is:" << (number % (int)pow(10, k))/(int)pow(10,k-1) << endl;
	}
	
	

	

	return 0;
}
