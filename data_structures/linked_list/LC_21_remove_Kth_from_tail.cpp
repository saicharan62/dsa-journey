// TC - O(n)
// SC - O(1)
// technique - we first move fast pointer N steps, and then slow and fast move one step at a time together, finally slow will be just before the node that needs to be removed.

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0);
        dummy.next = head;

        ListNode* slow = &dummy;
        ListNode* fast = &dummy;

        for(int i=0; i<n; i++) {
            fast = fast -> next;
        }

        while(fast -> next) {
            slow = slow -> next;
            fast = fast -> next;
        }
        slow -> next = slow -> next -> next;
        return dummy.next;
    }
};
