class Solution {
public:
    ListNode* reverseList(ListNode* node) {
        if (node==NULL || node->next==NULL) return node;
        ListNode* cur=node, *Next, *prev=NULL;
        while(cur!=NULL){
            Next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=Next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if (!head->next) return 1;
        ListNode* fast=head, *slow=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        if (fast)// odd length, move slow 1 more step;
            slow=slow->next;
        ListNode* backward=reverseList(slow);

        for(ListNode* cur=backward, *forward=head; cur;
        cur=cur->next, forward=forward->next){
            if (cur->val!=forward->val) return 0;
        }
        return 1; 
    }
};

auto init = []() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();