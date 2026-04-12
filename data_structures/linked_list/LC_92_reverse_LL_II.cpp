// TC - O(n)
// SC - O(n)
// technique - we first have prev poiner take steps upto left and it's next will be our reversal starting point, from that node,
//             we perform reversal logic and bring one element at a time to the front.
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode dummy(0);
        dummy.next = head;

        ListNode* prev = &dummy;
        for(int i=1; i<left; i++) {
            prev = prev -> next;
        }
        ListNode* curr = prev -> next;

        for(int i=0; i < right-left; i++) {
            ListNode* temp = curr -> next;
            curr -> next = temp -> next;
            temp -> next = prev -> next;
            prev -> next = temp;
        }
        return dummy.next;
    }
};
