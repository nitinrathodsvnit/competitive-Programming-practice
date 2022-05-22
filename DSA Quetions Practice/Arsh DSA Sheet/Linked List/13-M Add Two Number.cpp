/**
The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.
New concept:
take one dummy node (node* dummy = new node(); //null node) and then creat one temp node temp point to the dummy and then iterate temp node and return dummy->next
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