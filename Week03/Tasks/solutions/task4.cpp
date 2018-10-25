// Example program
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int answer = 0 ;
    int temperature;

    cout << "What kind of conversion do you want to make?\n";
    cout << "1) Celsius to Fahrenheit\n";
    cout << "2) Fahrenheit to Celsius\n";
    cin >> answer;
    if(answer == 1){
        cout << "Temperature in Celsius: ";
        cin >> temperature;
        cout << "Temperature in Fahrenheit: " <<  temperature * 1.8 + 32;
    } else {
        cout << "Temperature in Fahrenheit:  ";
        cin >> temperature;
        cout << "Temperature in Celsius:" << (temperature - 32) / 1.8;
    }

}
