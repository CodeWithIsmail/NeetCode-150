class Solution
{
public:
    int dp[110];
    int calc(int index, int en, vector<int> &nums)
    {
        if (index > en)
            return dp[index] = 0;
        if (dp[index] != -1)
            return dp[index];
        return dp[index] = max(nums[index] + calc(index + 2, en, nums),
                               calc(index + 1, en, nums));
    }
    int rob(vector<int> &nums)
    {
        if (nums.size() == 1)
            return nums.front();
        memset(dp, -1, sizeof(dp));
        int op1 = calc(0, nums.size() - 2, nums);
        memset(dp, -1, sizeof(dp));
        int op2 = calc(1, nums.size() - 1, nums);
        return max(op1, op2);
    }
};
