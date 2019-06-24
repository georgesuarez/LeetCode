/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *currNode = head;
        ListNode *nextNode = NULL;
        ListNode *prev = NULL;

        while (currNode != NULL)
        {
            nextNode = currNode->next;
            currNode->next = prev;
            prev = currNode;
            currNode = nextNode;
        }

        head = prev;

        return head;
    }
};