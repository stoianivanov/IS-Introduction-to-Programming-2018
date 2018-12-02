
#include <iostream>
using namespace std;
const int MAX_SIZE = 100;


int main()
{
	int arr[MAX_SIZE];

	int n;
        cout<<"N=";
	cin >> n;
	for (int i = 0; i < n*2; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n*2-1; i=i+2)
	{
		int sum1 = 0, sum2 = 0;

		for (int j = 1; j < arr[i]; j++)
		{
			if (arr[i] % j == 0) sum1 += j;
		}
		for (int k = 1; k < arr[i + 1]; k++)
		{
			if (arr[i + 1] % k == 0) sum2 += k;
		}
		if (arr[i] == sum2 && arr[i + 1] == sum1)
			cout << "Are Amicable pairs" << endl;
		else cout << "Are NOT Amicable pairs" << endl;
	}

    return 0;
}

