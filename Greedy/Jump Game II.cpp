class Solution
{
public:
    int jump(vector<int> &nums)
    {
        int l = 0, r = 0, i, ans = 0;
        while (r < nums.size() - 1)
        {
            int mx = 0;
            for (i = l; i <= r; i++)
                mx = max(mx, i + nums[i]);
            l = r + 1;
            r = mx;
            ans++;
        }
        return ans;
    }
};