#include <iostream>
#include <string>

int main() {
    int n, c = 0;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    char p = s[0];
    for (char i : s) {
        if (i == p){ c++;}
        p = i;
    }
    std::cout << c-1 << std::endl;
    return 0;
}
