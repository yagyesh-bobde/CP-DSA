#include <iostream>
#include <string>
#include <sstream>

std::string compressString(const std::string& str) {
    std::stringstream compressed;
    int count = 1;
    
    for (int i = 1; i < str.length(); i++) {
        if (str[i] == str[i - 1]) {
            count++;
        } else {
            compressed << str[i - 1] << count;
            count = 1;
        }
    }
    
    compressed << str[str.length() - 1] << count;
    
    return compressed.str();
}

int main() {
    std::string input;
    std::cin >> input;
    
    std::string compressedString = compressString(input);
    std::cout << compressedString << std::endl;
    
    return 0;
}
