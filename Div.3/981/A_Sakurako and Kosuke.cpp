#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {    
        int n;
        cin >> n;
        int x = 0;
        int j = 1;
        while (true) {
            int move = 2 * j - 1;
            if (j % 2 == 1) {
                x -= move;
            } else {
                x += move;
            }
            if (x < -n || x > n) {
                cout << (j % 2 == 1 ? "Sakurako" : "Kosuke") << endl;
                break;
            }
            j++;
        }
    }
    return 0;
}
