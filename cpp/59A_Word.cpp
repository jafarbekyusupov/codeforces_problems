#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;
    int b=0, l=0;
    for (char i: s){ i>=65 && i<=90 ? b++ : l++;}
    for (char &i : s) { i = ( l>= b ? std::tolower(i) : std::toupper(i));}
    std::cout << s << std::endl;
    return 0;
}
