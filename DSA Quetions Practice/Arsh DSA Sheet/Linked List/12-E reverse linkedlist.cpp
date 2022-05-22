ListNode *reverseList(ListNode *head)
{
    ListNode *prev = NULL;
    ListNode *current = head;
    ListNode *nxt;
    while (current)
    {
        nxt = current->next;
        current->next = prev;
        prev = current;
        current = nxt;
    }
    return prev;
}