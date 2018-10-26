#include<iostream>
using namespace std;
int main()
{
	int d;
	cout<<"Enter the number between [0 - 3]: "; cin>>d;
	switch (d)
	{
	case 0: 
		cout << "Spring \n"; 
		break;
	case 1: 
		cout << "Summer \n"; 
		break;
	case 2: 
		cout << "Autumn \n";
		break;
	case 3: 
		cout << "Winter \n";
		break;
	default: 
		cout<<"Error! The nubmer should be in interval [0-3] \n"; 
	}
	system("pause");
	return 0;
}