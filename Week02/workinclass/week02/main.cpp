#include <iostream>
#include <string>

using namespace std;

int main(){
    int x, y, z;
    cin >> x >> y >> z;
    int max, min;

    if(x > y && x > z){
        max = x;
    }

    if(y > x && y > z){
        max = y;
    }

    if( z > x && z > y){
        max = z;
    }

    if(x < y && x < z){
        min = x;
    }

    if(y < x && y < z){
        min = y;
    }

    if( z < x && z < y){
        min = z;
    }

    cout << "Max = " << max << endl<< "Min = " << min;



return 0;
}
