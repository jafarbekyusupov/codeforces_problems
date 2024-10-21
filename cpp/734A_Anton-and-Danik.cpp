#include <iostream>
using namespace std;

int main(){
    int n, a = 0, d = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i=0; i<n;i++){ (s[i] == 'A' ? a++ : d++); }
    cout << ( a>d ? "Anton" : (a == d ? "Friendship" : "Danik")) << endl;
    return 0;
}
