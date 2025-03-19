class Solution
{
public:
    int climbStairs(int n)
    {
        if (n < 3)
            return n;
        int count1 = 1, count2 = 2, ans, i;
        for (i = 3; i <= n; i++)
        {
            ans = count1 + count2;
            count1 = count2;
            count2 = ans;
        }
        return ans;
    }
};