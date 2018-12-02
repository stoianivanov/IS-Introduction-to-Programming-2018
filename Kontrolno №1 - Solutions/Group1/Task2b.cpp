#include <iostream>

#define SIZE 10

using namespace std;

int main() {
    int arr[SIZE][SIZE];

    int sum = 0;
    int n;
    cout<<"N=";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            sum += arr[i][j];
        }
    }

    cout << "Sum over the second diagonal: "<< sum;


    return 0;
}
