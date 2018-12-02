
#include <iostream>
using namespace std;
const int MAX_SIZE = 100;


int main()
{
    int matrix[MAX_SIZE][MAX_SIZE];
    int sum, maxSum=0, maxIndex=0;
    cout<<"N=";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<< matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
    for (int j = 0; j < n; j++)
    {
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += matrix[i][j];
        }
        if (sum > maxSum)
        {
            maxSum = sum;
            maxIndex = j;
        }
    }
    cout << "Index of column with max sum: " << maxIndex << endl;



    return 0;
}
