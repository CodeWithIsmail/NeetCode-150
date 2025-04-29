class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int current = -1e9, mx = -1e9, n = nums.size(), i;
        for (i = 0; i < n; i++)
        {
            current = max(nums[i], current + nums[i]);
            mx = max(mx, current);
        }
        return mx;
    }
};
