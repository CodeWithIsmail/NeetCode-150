class Solution
{
public:
    int mySqrt(int x)
    {
        long long l = 0, u = x, ans;
        while (l <= u)
        {
            long long mid = (l + u) / 2;
            long long mul = mid * mid;
            if (mul == x)
            {
                ans = mid;
                break;
            }
            if (mul > x)
                u = mid - 1;
            else
            {
                l = mid + 1;
                ans = mid;
            }
        }
        return ans;
    }
};