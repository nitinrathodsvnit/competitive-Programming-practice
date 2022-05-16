/*
Convert Binary Number in a Linked List to Integer

solution :-
Method1 :-
    revers the linkedlist and then convert to binary as normal
Method2 :-
    make a binary string till null and then make ans from that string
*/

int getDecimalValue(ListNode *head)
{
    ListNode *c = head;
    ListNode *p = NULL;
    ListNode *n;
    while (c)
    {
        n = c->next;
        c->next = p;
        p = c;
        c = n;
    }
    head = p;

    int t = 1, ans = 0;
    while (head)
    {
        ans += ((head->val) * t);
        head = head->next;

        t = t << 1;
    }
    return ans;
}

m2 : -int getDecimalValue(ListNode *head)
{
    string s;
    while (head)
    {
        s += to_string(head->val);
        head = head->next;
    }
    int t = 1, ans = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            ans += t;
        }
        t *= 2;
    }
    return ans;
}