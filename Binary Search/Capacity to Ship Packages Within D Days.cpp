class Solution
{
public:
    int shipWithinDays(vector<int> &weights, int days)
    {
        int l = 0, u = INT_MAX, mid, i, n = weights.size(), ans = INT_MAX;
        while (l <= u)
        {
            mid = (l + u) / 2;
            int count = 1, sum = 0;
            for (i = 0; i < n; i++)
            {
                if (weights[i] > mid)
                {
                    count = INT_MAX;
                    break;
                }
                sum += weights[i];
                if (sum > mid)
                {
                    count++;
                    sum = weights[i];
                }
            }
            if (count > days)
                l = mid + 1;
            else
            {
                u = mid - 1;
                ans = mid;
            }
        }
        return ans;
    }
};