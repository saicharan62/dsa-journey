// TC - O(n)
// SC - O(1)
// technique - we first find mid of LL and then split it into two parts using slow/fast pointers, 
//              then reverse the second half, then merge the LL by taking one element from one half at a time, alternatively.

class Solution {
public:
    ListNode* reverseLL(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr != NULL) {
            ListNode* next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
       
        while(fast -> next && fast -> next -> next) {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        ListNode* secHalf = slow -> next;
        slow -> next = NULL;

        secHalf = reverseLL(secHalf);

        ListNode* firstHalf = head;

        while(secHalf) {
            ListNode* temp1 = firstHalf -> next;
            ListNode* temp2 = secHalf -> next;

            firstHalf -> next = secHalf;
            secHalf -> next = temp1;

            firstHalf = temp1;
            secHalf = temp2;
        }
    }
};
