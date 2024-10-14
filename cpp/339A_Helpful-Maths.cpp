#include <iostream>
#include <vector>
#include <sstream>

int main() {
    std::string input;
    std::cin >> input;
    std::vector<int> numbers;
    std::stringstream ss(input);
    char plus;
    int number;
    while (ss >> number) {
        numbers.push_back(number);
        ss >> plus;
    }
    int n = numbers.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            (numbers[j] > numbers[j + 1]) ? std::swap(numbers[j], numbers[j + 1]) : void();
        }
    }
    for (int i = 0; i < n; ++i) {
        if(i>0){ std::cout << "+";}
        std::cout << numbers[i];
    }
    std::cout << std::endl;
    return 0;
}
