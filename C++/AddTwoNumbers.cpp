/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         ListNode *returnList = new ListNode(0);
         ListNode *currNode = returnList;
         ListNode *p = l1;
         ListNode *q = l2;
         int carry = 0;

         while (p != NULL || q != NULL)
         {
            int x = (p != NULL) ? p->val : 0;
            int y = (q != NULL) ? q->val : 0;
            int sum = x + y + carry;
            carry = sum / 10;
            ListNode *temp = new ListNode(sum % 10);
            currNode->next = temp;
            currNode = currNode->next;
            if (p != NULL)
                p = p->next;
             if (q != NULL)
                 q = q->next;
        }

        if (carry > 0)
        {
            currNode->next = new ListNode(carry);
        }

        return returnList->next;
    }
};