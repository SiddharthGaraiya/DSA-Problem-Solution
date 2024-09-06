/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* f(ListNode* head, set<int> &st){
    if(! head) return NULL;
    head->next = f(head->next, st);
    if(st.count(head->val)){
        ListNode* next = head->next;
        delete(head);
        return next;
    }
    return head;
}

ListNode* modifiedList(vector<int>& nums, ListNode* head) {
    set<int> st(nums.begin(), nums.end());
    return f(head, st);
}
};