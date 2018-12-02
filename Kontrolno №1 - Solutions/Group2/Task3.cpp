#include <iostream>

using namespace std;
const int SIZE_COL = 100;
const int SIZE_ROW = 100;

int main()
{
    int arr[SIZE_ROW][SIZE_COL], arr2[SIZE_ROW][SIZE_COL], num,sum=0;
    cout<<"N=";
    cin>>num;
    for(int i = 0; i<num; i++)
    {
        for(int j = 0; j<num; j++)
        {
            cin>>arr[i][j];
        }

    }

    for(int i = 0; i<num; i++)
    {
        for(int j = 0; j<num; j++)
        {
            if(i==0 || i == num-1 || j==0 || j==num-1)
            {
                if(i==0 && j ==0)
                {

                    if(arr[i][j] > arr[i+1][j] && arr[i][j] > arr[i][j+1])
                    {
                        arr2[i][j] = 1;
                    }
                    else
                    {
                        arr2[i][j] = 0;
                    }

                }
                else if(i==0 && j == num-1)
                {
                    if(arr[i][j] > arr[i+1][j] && arr[i][j] > arr[i][j-1])
                    {
                        arr2[i][j] = 1;
                    }
                    else
                    {
                        arr2[i][j] = 0;
                    }

                }
                else if(i==num-1 && j == num-1)
                {
                    if(arr[i][j] > arr[i-1][j] && arr[i][j] > arr[i][j-1])
                    {
                        arr2[i][j] = 1;
                    }
                    else
                    {
                        arr2[i][j] = 0;
                    }

                }
                else if(i==num-1 && j == 0)
                {
                    if(arr[i][j] > arr[i-1][j] && arr[i][j] > arr[i][j+1])
                    {
                        arr2[i][j] = 1;
                    }
                    else
                    {
                        arr2[i][j] = 0;
                    }
                }
                else if( j == 0)
                {
                    if(arr[i][j] > arr[i-1][j] && arr[i][j] > arr[i][j+1] && arr[i][j] > arr[i+1][j])
                    {
                        arr2[i][j] = 1;
                    }
                    else
                    {
                        arr2[i][j] = 0;
                    }
                }
                else if( j == num-1)
                {
                    if(arr[i][j] > arr[i-1][j] && arr[i][j] > arr[i][j-1] && arr[i][j] > arr[i+1][j])
                    {
                        arr2[i][j] = 1;
                    }
                    else
                    {
                        arr2[i][j] = 0;
                    }
                }
                else if( i == num-1)
                {
                    if(arr[i][j] > arr[i-1][j] && arr[i][j] > arr[i][j-1] && arr[i][j] > arr[i][j+1])
                    {
                        arr2[i][j] = 1;
                    }
                    else
                    {
                        arr2[i][j] = 0;
                    }
                }
                else if( i == 0)
                {

                    if(arr[i][j] > arr[i+1][j] && arr[i][j] > arr[i][j-1] && arr[i][j] > arr[i][j+1])
                    {
                        arr2[i][j] = 1;
                    }
                    else
                    {
                        arr2[i][j] = 0;
                    }
                }


            }
            else
            {
                if( arr[i][j] > arr[i+1][j] && arr[i][j] > arr[i-1][j] && arr[i][j] > arr[i][j+1] && arr[i][j] > arr[i][j-1])
                {
                    arr2[i][j] = 1;
                }
                else
                {
                    arr2[i][j] = 0;
                }
            }

            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;

    }

    return 0;
}
