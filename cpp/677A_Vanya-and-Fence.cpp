#include <iostream>
using namespace std;

int main(){
    int n, h, mx=0;
    cin >> n >> h;
    for (int i=0; i<n; i++){ 
        int a; 
        cin >> a;   
        a>h ? mx+=2 : mx++;
    }
    cout << mx << endl;
    return 0;
}
