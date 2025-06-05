/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        ListNode *hare = head;
        ListNode *tor = head;
        bool ans = true;
        while (1)
        {
            if (tor == nullptr || hare == nullptr)
                break;
            hare = hare->next;
            tor = tor->next;
            if (tor == nullptr)
                break;
            tor = tor->next;

            if (hare == tor)
            {
                ans = false;
                break;
            }
        }
        return !ans;
    }
};