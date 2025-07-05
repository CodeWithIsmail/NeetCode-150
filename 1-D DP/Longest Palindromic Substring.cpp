class Solution
{
public:
    string longestPalindrome(string s)
    {
        int i, j, n = s.size();
        string ln = "";
        for (i = 0; i < n; i++)
        {
            string temp = "";
            for (j = i - 1; j >= 0 && 2 * i - j < n; j--)
            {
                if (s[j] != s[2 * i - j])
                    break;
                temp += s[j];
            }
            string te = temp;
            reverse(temp.begin(), temp.end());
            temp += s[i];
            temp += te;
            if (temp.size() > ln.size())
                ln = temp;

            temp = "";
            for (j = i; j >= 0 && 2 * i - j + 1 < n; j--)
            {
                if (s[j] != s[2 * i - j + 1])
                    break;
                temp += s[j];
            }
            te = temp;
            reverse(temp.begin(), temp.end());
            temp += te;
            if (temp.size() > ln.size())
                ln = temp;
        }
        return ln;
    }
};
