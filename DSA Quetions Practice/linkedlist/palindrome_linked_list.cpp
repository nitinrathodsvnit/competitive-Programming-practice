/*

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        ListNode* temp = head;
        ListNode* c = head;
        ListNode* p = NULL;
        ListNode* n;
        while(c){
            v.push_back(c->val);
            n = c->next;
            c->next = p;
            p = c;
            c = n;
        }
//         now p is resvers linkedlist
        head = p;
        int i=0;
        while(head){
            if(head->val != v[i]){
                return false;
            }
            head = head->next;
            i++;
        }
        return true;
    }
};

*/
