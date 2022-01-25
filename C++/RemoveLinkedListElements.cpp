struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
    public:
        ListNode* removeElements(ListNode* head, int val) {
            if (head == nullptr) {
                return head;
            }

            ListNode* iter = head;

            while (iter && iter->val == val) {
                ListNode* temp = iter;
                iter = iter->next;
                delete temp;
            }

            head = iter;
            while (iter && iter->next != nullptr) {
                if (iter->next->val == val) {
                    ListNode* temp = iter->next;
                    iter->next = temp->next;
                    delete temp;
                } else {
                    iter = iter->next;
                }
            }

            return head;
        }
};