#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x = 0;
    for (int i=0; i<n; i++) {
        string op;
        cin >> op;
        x += (op=="++X" || op=="X++") ? 1 : (op == "--X" || op=="X--") ? -1 : 0;
    }
    cout << x << endl;
    return 0;
}
