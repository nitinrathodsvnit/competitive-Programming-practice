/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *temp = head, *slow = head;
        int from_begin = n;
        while (from_begin-- and temp)
        {
            temp = temp->next;
        }
        if (temp == NULL)
        {
            return head->next;
        }
        while (temp->next)
        {
            temp = temp->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return head;
    }
};