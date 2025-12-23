# LC:Middle of a linked list
# Pattern: Two pointers
# Time: O(n)
# Space: O(1)

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != nullptr && fast -> next != nullptr){
            slow = slow -> next;
            fast = fast -> next -> next;
            
        }
        return slow;
    }
};
