#include <iostream>
using namespace std;

int main(){
    int x, y;
    int nx=2, ny=2;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            int a;
            cin >> a;
            if(a==1){   x=j;    y=i;}    
        }
    }
    cout << abs(x-nx) + abs(y-ny);
    return 0;
}
