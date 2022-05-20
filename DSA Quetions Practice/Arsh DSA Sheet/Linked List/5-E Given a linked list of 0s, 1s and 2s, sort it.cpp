/*
Given a linked list of 0s, 1s and 2s, sort it.
intput: {1,2,2,1,2,0,2,2}
Output: 0 1 1 2 2 2 2 2

solutions:
count the number of 0, 1 and 2
then replace the value
*/

class Solution
{
public:
    // Function to sort a linked list of 0s, 1s and 2s.
    Node *segregate(Node *head)
    {
        int z = 0, o = 0, t = 0;
        Node *temp = head;
        while (temp)
        {
            if (temp->data == 0)
            {
                z++;
            }
            else if (temp->data == 1)
            {
                o++;
            }
            else
            {
                t++;
            }
            temp = temp->next;
        }
        temp = head;
        while (z > 0)
        {
            temp->data = 0;
            z--;
            temp = temp->next;
        }
        while (o > 0)
        {
            temp->data = 1;
            o--;
            temp = temp->next;
        }
        while (t > 0)
        {
            temp->data = 2;
            t--;
            temp = temp->next;
        }
        return head;
    }
};
