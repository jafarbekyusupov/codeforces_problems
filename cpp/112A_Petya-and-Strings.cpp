#include <iostream>
#include <string>
#include <algorithm>

void using_if_else(){
    std::string string1, string2;
    std::cin >> string1 >> string2;
    std::transform(string1.begin(), string1.end(), string1.begin(), ::tolower);
    std::transform(string2.begin(), string2.end(), string2.begin(), ::tolower);
    if (string1 < string2){ std::cout << "-1" << std::endl;} 
    else if (string1 > string2){    std::cout << "1" << std::endl;} 
    else {  std::cout << "0" << std::endl;}
}

void using_ternary(){
    std::string str1, str2;
    std::cin >> str1 >> str2;
    std::transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    std::transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    std::cout << (str1 < str2 ? "-1" : (str1 > str2 ? "1" : "0")) << std::endl;
}


int main() {
    // using_ternary();
    // using_if_else();
    return 0;
}
