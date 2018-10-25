// Example program
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int number = 0 ;
    cout << "Enter a number";
    cin >> number;
    int a,b,c,d;
    a = number%10;
    b = (number/10)%10;
    c = (number/1000)%10;
    d = (number/10000)%10;
    cout << (a == d && b == c ? "Yes": "No");
}
