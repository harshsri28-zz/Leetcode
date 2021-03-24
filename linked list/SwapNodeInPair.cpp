class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp = new ListNode();
        temp->next=head;
        ListNode* current = temp;
        
        while(current->next !=0 && current->next->next !=0){
            ListNode* first = current->next;
            ListNode* second = current->next->next;
            first->next = second->next;
            current->next = second;
            current->next->next = first;
            current = current->next->next;
        }
       return temp->next; 
    }
};
