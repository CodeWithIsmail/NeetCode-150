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
    void reorderList(ListNode *head)
    {
        int count = 0;
        ListNode *cur = head;
        while (cur)
        {
            count++;
            cur = cur->next;
        }
        if (count > 1)
        {
            int mid = (count + 1) / 2, n = 0;
            cur = head;
            ListNode *midNode, *temp, *te;
            while (cur)
            {
                n++;
                te = cur->next;
                if (n == mid)
                    midNode = cur;
                if (n == mid + 1)
                    cur->next = nullptr;
                if (n > mid + 1)
                    cur->next = temp;
                temp = cur;
                cur = te;
            }
            midNode->next = temp;
            cur = head;
            n = 0;
            ListNode *ne = nullptr;
            while (cur)
            {
                n++;
                if (n > mid)
                    break;
                if (ne)
                    ne->next = cur;
                te = cur->next;
                cur->next = temp;
                ne = temp;
                if (temp)
                    temp = temp->next;
                cur = te;
            }
        }
    }
};