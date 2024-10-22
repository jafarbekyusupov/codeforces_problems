#include <iostream>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    bool a;
    if((t.size() != s.size()) || (s[0] != t[s.size()-1])){  cout << "NO" << endl;   return 0;}
    for (int i=1; i < t.size();i++){ 
        if(s[i] != t[s.size()-i-1]){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
