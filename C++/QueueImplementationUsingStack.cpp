#include <stack>

using namespace std;

class MyQueue {
    public:
        MyQueue() {

        }

        void push(int x) {
            s1.push(x);
        }

        int pop() {
            if (s2.empty()) {
                while (!s1.empty()) {
                    s2.push(s1.top());
                    s1.pop();
                }

                int removedElement = s2.top();
                s2.pop();
                return removedElement;
            } else {
                int removedElement = s2.top();
                s2.pop();
                return removedElement;
            }
        }

        int peek() {
            if (s2.empty()) {
                while (!s1.empty()) {
                    s2.push(s1.top());
                    s1.pop();
                }
                return s2.top();
            } else {
                return s2.top();
            }
        }

        bool empty() {
            return s1.empty() && s2.empty();
        }

    private:
        stack<int> s1;
        stack<int> s2;
};