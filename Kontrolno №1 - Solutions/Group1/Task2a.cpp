#include <iostream>

#define SIZE 10

using namespace std;

int main() {
    int arr[SIZE][SIZE];

    int rowSum = 0;
    int maxRowSum = 0;
    int rowIndex = 0;
    int n;
    cout<<"N=";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        maxRowSum += arr[0][i];
    }

    for (int i = 1; i < n; i++) {
        rowSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += arr[i][j];
        }

        if (rowSum > maxRowSum) {
            maxRowSum = rowSum;
            rowIndex = i;
        }
    }

    cout <<"Index of row with max sum:"<< rowIndex;


    return 0;
}
