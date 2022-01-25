#include <map>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
    public:
        bool hasCycle(ListNode *head) {
            if (head == NULL) {
                return false;
            }

            ListNode* curr = head;
            map<ListNode*, bool> visited;

            while (curr != NULL) {
                if (visited.find(curr) != visited.end()) {
                    return true;
                } else {
                    visited[curr] = true;
                }

                curr = curr->next;
            }

            return false;
        }
};