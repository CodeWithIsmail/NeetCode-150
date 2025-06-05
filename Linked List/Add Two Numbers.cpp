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

class Solution
{
public:
    ListNode *head, *tail;
    void insert(int val)
    {
        ListNode *cur = new ListNode(val);
        if (head == nullptr)
        {
            head = tail = cur;
        }
        else
        {
            tail->next = cur;
            tail = cur;
        }
    }

    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int x, y, rem = 0;
        head = tail = nullptr;
        while (l1 != nullptr || l2 != nullptr)
        {
            if (l1 == nullptr)
                x = 0;
            else
            {
                x = l1->val;
                l1 = l1->next;
            }
            if (l2 == nullptr)
                y = 0;
            else
            {
                y = l2->val;
                l2 = l2->next;
            }
            int total = x + y + rem;
            int got = total % 10;
            rem = total / 10;
            insert(got);
        }
        if (rem > 0)
            insert(rem);
        return head;
    }
};
