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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* cur1 = list1;
        ListNode* cur2 = list2;
        ListNode dummy;
        ListNode* merge = &dummy;
        while (cur1 != nullptr && cur2 != nullptr) {
            if (cur1->val < cur2->val) {
                merge->next = cur1;
                cur1 = cur1->next;
            } else {
                merge->next = cur2;
                cur2 = cur2->next;
            }
            merge = merge->next;
        }
        if (cur1 != nullptr)
            merge->next = cur1;

        if (cur2 != nullptr)
            merge->next = cur2;

        return dummy.next;
    }
};