#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, m, k;
	cout<<"n=";
	cin>>n;
        cout<<"m=";
        cin >>m;
        cout<<"k=";
        cin >> k;
	
	// Ако броя парчета е кратен на реда или колоната И има достатъчнен брой парчета
	if((k%n==0 || k%m==0) && n*m > k)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
    return 0;
}
