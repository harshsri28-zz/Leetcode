class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* prev = nullptr, *curr = head, *nxt;
        while(curr){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode* prev = nullptr, *h1 = head, *h2 = head, *trev = nullptr;
        while(--m){
            prev = h1;
            h1 = h1->next;
        }
        while(--n)
            h2 = h2->next;
        if(h2)
           trev = h2->next;
        h2->next = nullptr;
        h1 = reverse(h1);
        prev?prev->next = h1: head = h1;
        while(h2->next)
            h2 = h2->next;
        h2->next = trev;
        return head;
    }
};
