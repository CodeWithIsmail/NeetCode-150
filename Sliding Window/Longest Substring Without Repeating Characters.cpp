class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int last_index[200] = {0};
        int ans = 0, left = 0, i;
        for (i = 1; i <= s.size(); i++)
        {
            int last = last_index[s[i - 1]];
            if (last > left)
            {
                ans = max(ans, i - left - 1);
                left = last;
            }
            last_index[s[i - 1]] = i;
        }
        ans = max(ans, i - left - 1);
        return ans;
    }
};