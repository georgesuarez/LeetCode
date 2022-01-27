#include <stack>
#include <string>

using namespace std;

class Solution {
    public:
        bool isValid(string s) {
            stack<char> paraStack;

            for (int i = 0; i < s.length(); i++) {
                if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                    paraStack.push(s[i]);
                } else if (!paraStack.empty() && (s[i] == ')' || s[i] == '}' || s[i] == ']')) {
                    if (paraStack.top() == '(' && s[i] == ')')
                        paraStack.pop();
                    else if (paraStack.top() == '{' && s[i] == '}')
                        paraStack.pop();
                    else if (paraStack.top() == '[' && s[i] == ']')
                        paraStack.pop();
                    else
                        return false;
                } else {
                    return false;
                }
            }

            return (paraStack.empty()) ? true : false;
        }
};