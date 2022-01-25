struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
    public:
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            if (list1 == nullptr && list2 == nullptr) {
                return nullptr;
            }

            ListNode* l1 = list1;
            ListNode* l2 = list2;

            if (l1 == nullptr) {
                return l2;
            } else if (l2 == nullptr) {
                return l1;
            }

            ListNode* head = nullptr;
            ListNode* prev = nullptr;

            while (l1 && l2) {
                if (!head && l1->val <= l2->val) {
                    head = l1;
                    l1 = l1->next;
                    prev = head;
                    prev->next = nullptr;
                } else if (!head && l1->val > l2->val) {
                    head = l2;
                    prev = head;
                    prev->next = nullptr;
                } else if (l1->val < l2->val) {
                    prev->next = l1;
                    l1 = l1->next;
                    prev->next = nullptr;
                } else {
                    prev->next = l2;
                    l2 = l2->next;
                    prev = prev->next;
                    prev->next = nullptr;
                }
            }

            while (l1) {
                prev->next = l1;
                prev = prev->next;
                prev->next = nullptr;
            }

            while (l2) {
                prev->next = l2;
                l2 = l2->next;
                prev = prev->next;
                prev->next = nullptr;
            }

            return head;
        }
};