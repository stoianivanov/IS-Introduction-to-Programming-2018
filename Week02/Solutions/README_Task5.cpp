#include<iostream>
using namespace std;

int main()
{
	double ch, h;
        cout<<"ch=";
	cin >> ch ;
        cout<<"h=";
        cin >> h;
	double S;
	S = (ch * h) / 2;
	cout << "S= " << S << endl;

	double a, b, c;
        cout<<"a=";
	cin >> a ;
        cout<<"b=";
        cin >> b ;
        cout<<"c=" ;
        cin >> c;

	double S;
        double p;

	p = (a + b + c) / 2;
	S = sqrt(p*(p - a)*(p - b)*(p - c));
	cout << "S = " << S << endl;
	return 0;

}
