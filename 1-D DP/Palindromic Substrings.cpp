class Solution
{
public:
    int countSubstrings(string s)
    {
        int i, j, count = 0, n = s.size();

        for (i = 0; i < n; i++)
        {
            count++;
            for (j = i - 1; j >= 0 && 2 * i - j < n; j--)
            {
                if (s[j] != s[2 * i - j])
                    break;
                count++;
            }

            for (j = i; j >= 0 && 2 * i - j + 1 < n; j--)
            {
                if (s[j] != s[2 * i - j + 1])
                    break;
                count++;
            }
        }
        return count;
    }
};