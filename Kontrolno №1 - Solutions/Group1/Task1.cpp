#include <iostream>
#include <cmath>

#define SIZE 1024

using namespace std;

bool palindrom(int num);
int reversedNum(int num);
int digitCout(int num);

int main() {
    
    int arr[SIZE];
    cout<<"N=";
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        int reversed = reversedNum(arr[i]);
        if (palindrom(reversed + arr[i])) {
            cout << "Is not Lychrel number. " << endl;
        } else {
            cout << "Is Lychrel number. " << endl;
        }
    }

    return 0;
}

int digitCout(int num) {
    int temp = num;
    int digits = 0;

    while (temp) {
        digits++;
        temp /= 10;
    }

    return digits;
}

bool palindrom(int num) {
    int reversed = reversedNum(num);
    int digits = digitCout(num);

    for (int i = 0; i < digits; i++) {
        if ((num / (int)pow(10, i)) % 10 != (reversed / (int)pow(10, i)) % 10) {
            return false;
        }
    }
    return true;
}

int reversedNum(int num) {
    int digits = digitCout(num);
    int temp = num;
    int reversed = 0;
    while (temp) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }
    return reversed;
}
