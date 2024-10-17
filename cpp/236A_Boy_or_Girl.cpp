#include <iostream>
#include <set>
#include <string>

int main() {
    std::string user;
    std::set<char> dc;
    std::cin >> user;
    for (char c : user){    dc.insert(c);}
    std::cout << (dc.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!") << std::endl;
    return 0;
}
