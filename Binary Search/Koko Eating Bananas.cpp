class Solution
{
public:
    int minEatingSpeed(vector<int> &piles, int h)
    {
        long long low = 1, up = 1e12, ans = up;
        while (low <= up)
        {
            long long mid = (low + up) / 2;
            long long need = 0;
            for (auto x : piles)
                need += (x + mid - 1) / mid;
            if (need > h)
                low = mid + 1;
            else
            {
                up = mid - 1;
                ans = min(ans, mid);
            }
        }
        return ans;
    }
};
