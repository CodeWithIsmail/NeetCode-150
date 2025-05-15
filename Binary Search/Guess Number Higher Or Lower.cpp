/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution
{
public:
    int guessNumber(int n)
    {
        long long l = 1, u = n, mid, g;
        while (l <= u)
        {
            mid = (l + u) / 2;
            long long res = guess(mid);
            if (res == -1)
                u = mid - 1;
            else if (res == 1)
                l = mid + 1;
            else
            {
                g = mid;
                break;
            }
        }
        return g;
    }
};