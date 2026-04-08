// TC - O(n)
// SC - O(1)
// technique - we change directions first using prev pointer and then move forward curr and next pointers, one step at a time until NULL.

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;

        while(curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};
