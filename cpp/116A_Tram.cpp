#include <iostream>
using namespace std;

int main(){
    int n, mx = 0, c = 0;
    cin >> n;
    for (int i = 0; i<n; i++){
        int a, b;
        cin >> a >> b;
        c += b-a;
        mx = (c>mx ? c : mx);
    }
    cout << mx << endl;
    return 0;
}
