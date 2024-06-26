#include <iostream>
#include <stack>
#include <vector>
#include <sstream>
#include <map>
#include <cctype>

using namespace std;

bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

int precedence(char op) {
    if(op == '+' || op == '-') return 1;
    if(op == '*' || op == '/') return 2;
    return 0;
}

int applyOp(int a, int b, char op) {
    switch(op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
    }
    return 0;
}

int evaluate(const string& tokens) {
    stack<int> values;
    stack<char> ops;

    for(int i = 0; i < tokens.length(); i++) {
        if(tokens[i] == ' ') continue;
        else if(isdigit(tokens[i])) {
            int val = 0;
            while(i < tokens.length() && isdigit(tokens[i])) {
                val = (val*10) + (tokens[i]-'0');
                i++;
            }
            values.push(val);
            i--;
        }
        else if(tokens[i] == '(') {
            ops.push(tokens[i]);
        }
        else if(tokens[i] == ')') {
            while(!ops.empty() && ops.top() != '(') {
                int val2 = values.top();
                values.pop();
                int val1 = values.top();
                values.pop();
                char op = ops.top();
                ops.pop();
                values.push(applyOp(val1, val2, op));
            }
            if(!ops.empty()) ops.pop();
        }
        else if(isOperator(tokens[i])) {
            while(!ops.empty() && precedence(ops.top()) >= precedence(tokens[i])) {
                int val2 = values.top();
                values.pop();
                int val1 = values.top();
                values.pop();
                char op = ops.top();
                ops.pop();
                values.push(applyOp(val1, val2, op));
            }
            ops.push(tokens[i]);
        }
    }
    while(!ops.empty()) {
        int val2 = values.top();
        values.pop();
        int val1 = values.top();
        values.pop();
        char op = ops.top();
        ops.pop();
        values.push(applyOp(val1, val2, op));
    }
    return values.top();
}

int main() {
    string expression;
    cout << "Enter expression: ";
    getline(cin, expression);
    cout << "The result is: " << evaluate(expression) << endl;
    return 0;
}
