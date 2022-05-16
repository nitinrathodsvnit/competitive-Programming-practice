/*
    Return Middle of the Linked List
    Input: head = [1,2,3,4,5]
    Output: [3,4,5]Input: head = [1,2,3,4,5,6]
    Output: [4,5,6]

Solutions :-
    Method 1 :-
    Using Brutforce
        firstly itrate the linkedlist till the end and find the length of the linkedlist and then return length/2 pointer

    Method 2 :-
    Runner Techniqe(Fast pointer Slow pointer)
*/

class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast and fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};