
/*
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* c = head;
        ListNode* p = NULL;
        ListNode* n;
        while(c){
            n = c->next;
            c->next = p;
            p=c;
            c = n;
        }
        head = p;
        
        int t=1, ans=0;
        while(head){
            ans += ((head->val)*t);
            head = head->next;
            
            t = t<<1;
        }
        return ans;
    }
};

*/