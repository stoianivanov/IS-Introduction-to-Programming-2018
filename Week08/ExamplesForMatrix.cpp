#include <iostream>
const int ROWS_SIZE=100;
const int COLS_SIZE=100;
const int ROWS=3;
const int COLS=5;
using namespace std;
int main() {
    //one way
    int arr[ROWS_SIZE][COLS_SIZE] ;

    cout<<"rows=";
    int rows;
    cin>>rows;
    cout<<"cols=";
    int cols;
    cin>>cols;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<"arr["<<i<<"]["<<j<<"]=";
            cin>>arr[i][j];
        }

    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
                cout<<arr[i][j]<<"\t";
        }
        cout<<endl;


    }
    int sum =0;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(i>j)
            {
                sum += arr[i][j];
            }
        }
    }
    cout<<"Sum="<<sum<<endl;
    int sumOfDiagonal=0;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(i==j)
            {
                sumOfDiagonal += arr[i][j];
            }
        }
    }
    cout<<"SumOfDiagonal="<<sumOfDiagonal<<endl;
    int sumOfSecondDiagonal=0;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(i+j==rows-1)
            {
                sumOfSecondDiagonal += arr[i][j];
            }
        }
    }
    cout<<"SumOfSecondDiagonal="<<sumOfSecondDiagonal<<endl;
 int sumOfOverSecondDiagonal=0;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(i+j<rows-1)
            {
                sumOfOverSecondDiagonal += arr[i][j];
            }
        }
    }
    cout<<"SumOfOverSecondDiagonal="<<sumOfOverSecondDiagonal<<endl;
    int sumOfUnderSecondDiagonal=0;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(i+j>rows-1)
            {
                sumOfUnderSecondDiagonal += arr[i][j];
            }
        }
    }
    cout<<"SumOfUnderSecondDiagonal="<<sumOfUnderSecondDiagonal<<endl;
    int helperMatrix[rows][cols];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            helperMatrix[i][j]=arr[i][j];
        }
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
           cout<<helperMatrix[i][j]<<"\t";

        }
        cout<<endl;
    }

    // other way

    char arr1 [ROWS][COLS]={{'c','b','c','d','e'},{'c','g','c','i','j'},{'k','c','m','n','o'}};

    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            cout << arr1 [i][j] << "\t ";
        }
        cout << endl;
    }
    int countOfC=0;
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            if(arr1[i][j]== 'c')
            {
                countOfC++;
            }
        }

    }
    cout<<"Count of c :"<<countOfC<<endl;



    return 0;
}