class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size(), i;
        vector<int> ans(n);
        ans[0] = ans[n - 1] = 1;
        int cur = 1;
        for (i = 0; i < n - 1; i++)
        {
            cur *= nums[i];
            ans[i + 1] = cur;
        }
        cur = 1;
        for (i = n - 1; i >= 0; i--)
        {
            ans[i] *= cur;
            cur *= nums[i];
        }
        return ans;
    }
};