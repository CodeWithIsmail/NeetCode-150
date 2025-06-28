class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        int a = word1.size(), b = word2.size(), mn = min(a, b), i;
        string ans = "";
        for (i = 0; i < mn; i++)
        {
            ans += word1[i];
            ans += word2[i];
        }
        for (i = mn; i < a; i++)
            ans += word1[i];
        for (i = mn; i < b; i++)
            ans += word2[i];
        return ans;
    }
};