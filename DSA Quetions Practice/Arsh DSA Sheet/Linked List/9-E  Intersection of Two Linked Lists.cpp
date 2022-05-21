/*
input: listA = [4,1,8,4,5], listB = [5,6,1,8,4,5]
Output: Intersected at '8'

sol: firstly determine the size of both LinkedList if anyone is bigger,  then iterate till they both are not the same and then iterate both at the same loop and check when the both linkedlist are same or not and then return
a new thing I larne: we can also swap the linked list swap(temp1, temp2)
*/
// M2: just iterate and larne
// ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//     ListNode *ptrA = headA, *ptrB = headB;
//     while (ptrA != ptrB) {
//         ptrA = ptrA ? ptrA->next : headB;
//         ptrB = ptrB ? ptrB->next : headA;
//     }
//     return ptrA;
// }
class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *A, ListNode *B)
    {
        string s1 = "", s2 = "";
        ListNode *temp1 = A;
        ListNode *temp2 = B;
        int n1 = 0, n2 = 0;
        while (A)
        {
            A = A->next;
            n1++;
        }
        while (B)
        {
            B = B->next;
            n2++;
        }
        int i = abs(n1 - n2);
        if (n1 < n2)
        {
            swap(temp1, temp2);
        }
        while (i--)
        {
            temp1 = temp1->next;
        }
        while (temp1 != temp2)
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return temp1;
    }
};
