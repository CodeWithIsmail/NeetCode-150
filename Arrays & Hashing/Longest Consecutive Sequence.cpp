class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        unordered_set<int> num(nums.begin(), nums.end());
        int ans = 0;
        for (auto x : num)
        {
            if (!num.count(x - 1))
            {
                int st = x, count = 0;
                while (num.count(st))
                {
                    st++;
                    count++;
                }
                ans = max(ans, count);
            }
        }

        return ans;
    }
};