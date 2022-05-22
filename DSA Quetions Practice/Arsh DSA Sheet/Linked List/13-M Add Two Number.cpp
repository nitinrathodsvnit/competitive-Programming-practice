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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *ans1 = new ListNode();
        ListNode *ans = ans1;
        int tm = l1->val + l2->val;
        int carry = tm > 9 ? 1 : 0;
        ans->next = new ListNode(tm % 10);
        l1 = l1->next;
        l2 = l2->next;
        ans = ans->next;
        while (l1 and l2)
        {
            tm = carry + l1->val + l2->val;
            ans->next = new ListNode(tm % 10);
            carry = tm > 9 ? 1 : 0;
            l1 = l1->next;
            l2 = l2->next;
            ans = ans->next;
        }
        while (l1)
        {
            tm = carry + l1->val;
            ans->next = new ListNode(tm % 10);
            carry = tm > 9 ? 1 : 0;
            l1 = l1->next;
            ans = ans->next;
        }
        while (l2)
        {
            tm = carry + l2->val;
            ans->next = new ListNode(tm % 10);
            carry = tm > 9 ? 1 : 0;
            ans = ans->next;
            l2 = l2->next;
        }
        while (carry)
        {
            ans->next = new ListNode(carry);
            break;
        }
        return ans1->next;
    }
};