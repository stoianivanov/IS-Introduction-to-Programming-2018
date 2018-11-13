#include <iostream>
const int SIZE=100;
using namespace std;
int main() {
    int arr[SIZE] ;
    cout<<"n=";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"arr["<<i<<"]=";
        cout<< arr[i];
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            cout<<arr[i]<<" ";
        }

    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            cout<<arr[i]<<" ";
        }

    }

    return 0;
}