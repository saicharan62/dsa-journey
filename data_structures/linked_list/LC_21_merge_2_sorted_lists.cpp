// TC - O(n + m)
// SC - O(1)
// technique - we use a dummy node object and store the address of it in a pointer and we build the LL by picking smaller ones in loop.

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);
        ListNode* tail = &dummy;

        while (list1 && list2) {
            if (list1->val <= list2->val) {
                tail->next = list1;
                list1 = list1 -> next;
            } else {
                tail->next = list2;
                list2 = list2 -> next;
            }
            tail = tail->next;
        }
        if (list1)
            tail->next = list1;
        else
            tail->next = list2;

        return dummy.next;
    }
};
