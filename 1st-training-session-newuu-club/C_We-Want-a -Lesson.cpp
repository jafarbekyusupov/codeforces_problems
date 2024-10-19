#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    string s;
    for(int i=0; i<t; i++){
        cin >> s;
        if(s == "BdnaDars"){ cout << "Enough!" << endl;}
        else{cout << "OK" << endl;}
    }
    return 0;
}
