#include <iostream>
#include <vector>
#include <string>

void generateParenthesesHelper(std::vector<std::string>& result, std::string current, int open, int close, int n) {
    if (current.size() == n * 2) {
        result.push_back(current);
        return;
    }

    if (open < n)
        generateParenthesesHelper(result, current + "(", open + 1, close, n);
    if (close < open)
        generateParenthesesHelper(result, current + ")", open, close + 1, n);
}

std::vector<std::string> generateParentheses(int n) {
    std::vector<std::string> result;
    generateParenthesesHelper(result, "", 0, 0, n);
    return result;
}

int main() {
    int n = 3;
    std::vector<std::string> parentheses = generateParentheses(n);
    for (size_t i = 0; i < parentheses.size(); ++i)
        std::cout << parentheses[i] << std::endl;
    return 0;
}

