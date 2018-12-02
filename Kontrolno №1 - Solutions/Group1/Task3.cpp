#include <iostream>

#define SIZE 10

using namespace std;

int main() {
   
    int arr[SIZE][SIZE];
    int result[SIZE][SIZE];
    int temp[5];
    int n;
    cout<<"N=";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < 5; k++) {
                temp[k] = 0;
            }

            if (arr[i][j] < arr[i - 1][j] && i - 1 >= 0) {
                temp[0] = arr[i - 1][j];
            }
            if (arr[i][j] < arr[i + 1][j] && i + 1 < n) {
                temp[1] = arr[i + 1][j];
            }
            if (arr[i][j] < arr[i][j - 1] && j - 1 >= 0) {
                temp[2] = arr[i][j - 1];
            }
            if (arr[i][j] < arr[i][j + 1] && j + 1 < n) {
                temp[3] = arr[i][j + 1];
            }
            temp[4] = arr[i][j];

            int maxInTemp = temp[0];

            for (int k = 1; k < 5; k++) {
                if (maxInTemp < temp[k]) {
                    maxInTemp = temp[k];
                }
            }
            result[i][j] = maxInTemp;
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }



    return 0;
}
