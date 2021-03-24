class Solution {
public:
    ListNode* merge2(ListNode* l1, ListNode *l2){
        ListNode* head = new ListNode(0);
        ListNode* node = head;
        while(l1 && l2){
            if (l1->val <=l2->val){
                node->next = l1;
                l1 = l1->next;
            }else{
                node->next = l2;
                l2=l2->next;
            }
            node = node->next;
        }
        node->next = l1?l1:l2;
        return head->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *head = new ListNode(0);
        int n = lists.size();
        if (n == 0) return NULL;
        
        while(n > 1){
            for(int i=0;i<n/2;++i){
                lists[i] = merge2(lists[i],lists[n-1-i]);
            }
            n = (n+1)/2;
        }
        return lists[0];
    }
};
