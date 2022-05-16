// Remove Duplicates from Sorted List

ListNode *deleteDuplicates(ListNode *head)
{
    ListNode *t = head;
    while (t)
    {
        while (t->next and t->val == t->next->val)
        {
            t->next = t->next->next;
        }
        t = t->next;
    }

    return head;
}