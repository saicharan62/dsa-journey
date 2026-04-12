// TC - O(n)
// SC - O(n)
// technique - we calculate sum of respective nodes from each list and then take last digit for new node and then pass the remaining digits to carry forward, to get added with next new node.

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* temp = &dummy;

        int carry = 0;
        while(l1 || l2 || carry) {
            int sum = carry;

            if(l1) {
                sum += l1 -> val;
                l1 = l1 -> next;
            }
            if(l2) {
                sum += l2 -> val;
                l2 = l2 -> next;
            }

            carry = sum / 10;

            ListNode* node = new ListNode(sum % 10);
            temp -> next = node;
            temp = temp -> next;
        }
        return dummy.next;
    }
};
