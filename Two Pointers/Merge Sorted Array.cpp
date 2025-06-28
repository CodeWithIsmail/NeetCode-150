class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int ar[m + n];
        int st1 = 0, st2 = 0, i;
        for (i = 0; i < m + n; i++)
        {
            if (st1 == m)
            {
                ar[i] = nums2[st2];
                st2++;
            }
            else if (st2 == n)
            {
                ar[i] = nums1[st1];
                st1++;
            }
            else if (nums1[st1] < nums2[st2])
            {
                ar[i] = nums1[st1];
                st1++;
            }
            else
            {
                ar[i] = nums2[st2];
                st2++;
            }
        }

        for (i = 0; i < m + n; i++)
            nums1[i] = ar[i];
    }
};