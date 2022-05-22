/**
 * revese both linkedlist and then sum like first
 */
class Solution
{
public:
    ListNode *reversee(ListNode *&l)
    {
        ListNode *c = l;
        ListNode *prev = NULL;
        ListNode *n;
        while (c)
        {
            n = c->next;
            c->next = prev;
            prev = c;
            c = n;
        }
        return prev;
    }
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        l1 = reversee(l1);
        l2 = reversee(l2);
        ListNode *dummy = new ListNode();
        ListNode *temp = dummy;
        int carry = 0, ans = 0, tm;
        // temp = temp->next;
        while (l1 or l2 or carry)
        {
            tm = 0;
            if (l1)
            {
                tm += (l1->val);
                l1 = l1->next;
            }
            if (l2)
            {
                tm += (l2->val);
                l2 = l2->next;
            }
            if (carry)
            {
                tm += carry;
            }
            temp->next = new ListNode(tm % 10);
            carry = tm > 9 ? 1 : 0;
            temp = temp->next;
        }
        temp->next = NULL;
        dummy = reversee(dummy->next);
        return dummy;
    }
};