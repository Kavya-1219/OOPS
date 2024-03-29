#include <iostream>
#include <string>
#include <sstream>

int countWords(const std::string& str) {
    std::stringstream ss(str);
    std::string word;
    int count = 0;
    while (ss >> word)
        count++;
    return count;
}

int main() {
    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    int wordCount = countWords(sentence);
    std::cout << "Number of words: " << wordCount << std::endl;

    return 0;
}

