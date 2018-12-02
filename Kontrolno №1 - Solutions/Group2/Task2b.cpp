#include <iostream>
using namespace std;
const int SIZE=100;
int main()
{
    int matrix[SIZE][SIZE];
    cout<<"N=";
    int num;
    cin>>num;

    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            cin>>matrix[i][j];
        }
    }
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }

    int sum=0;
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            if((i+j)<(num-1))
            {
                sum=sum+matrix[i][j];
            }
        }
    }
    cout<<"The sum under main diagonal is: "<<sum<<endl;
    return 0;
}
