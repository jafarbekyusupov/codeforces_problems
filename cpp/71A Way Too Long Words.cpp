#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        string s;
        cin >> s;
        int len = s.length();
        cout << (len > 10 ? s[0] + to_string(len - 2) + s[len - 1] : s) << endl;
    }
    return 0;
}
