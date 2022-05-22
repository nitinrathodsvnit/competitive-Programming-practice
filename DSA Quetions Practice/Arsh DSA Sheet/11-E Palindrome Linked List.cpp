/*
there are many method to do this
M1: reverse the linked list and then compair both are same or not
M2: convert linkedlist in to the string and then check
*/

bool isPalindrome(ListNode *head)
{
    ListNode *temp = head;
    string s = "";
    while (temp)
    {
        s += to_string(temp->val);
        temp = temp->next;
    }
    for (int i = 0; i < s.length() / 2; i++)
    {
        if (s[i] != s[s.length() - 1 - i])
        {
            return false;
        }
    }
    return true;
}