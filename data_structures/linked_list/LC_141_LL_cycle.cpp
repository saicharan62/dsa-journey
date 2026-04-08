// TC - O(n)
// SC - O(1)
// technique - slow pointer takes 1 step and fast takes 2 steps at a time respectively and when they both meet, LL has a cycle.

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (!head || !head->next) return false;

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {
            slow = slow->next;           
            fast = fast->next->next;     

            if (slow == fast) return true; 
        }

        return false; 
    }
};
