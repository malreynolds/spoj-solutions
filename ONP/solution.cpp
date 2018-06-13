#include <iostream>
#include <stack>
#include <map>

using namespace std;

map<char, int> operator_priority;

string transform(string expression) {
    string res;
    stack<char> operators;

    for (auto c: expression) {
        if (c == '(') {
            operators.push(c);
        } else if (c == ')') {
            while(operators.top() != '(') {
                res += operators.top();
                operators.pop();
            }
            operators.pop();
        } else {
            auto p = operator_priority.find(c);
            if (p != operator_priority.end()) {
                while (operator_priority[operators.top()] > operator_priority[c] && operators.top() != '(') {
                    res += operators.top();
                    operators.pop();
                }
                operators.push(c);
            } else {
                res += c;
            }
        }
    }
    while(!operators.empty()) {
        res += operators.top();
        operators.pop();
    }
    return res;
}

int main() {
    operator_priority['+'] = 1;
    operator_priority['-'] = 2;
    operator_priority['*'] = 3;
    operator_priority['/'] = 4;
    operator_priority['^'] = 5;
    int t;
    cin >> t;
    string expression;
    while(t--) {
        cin >> expression;
        cout << transform(expression) << endl;
    }
    return 0;
}