class Solution
{
public:
    int dp[110];
    int calc(int index, vector<int> &nums)
    {
        if (index >= nums.size())
            return dp[index] = 0;
        if (dp[index] != -1)
            return dp[index];
        return dp[index] = max(nums[index] + calc(index + 2, nums), calc(index + 1, nums));
    }
    int rob(vector<int> &nums)
    {
        for (int i = 0; i < 110; i++)
            dp[i] = -1;
        return calc(0, nums);
    }
};
