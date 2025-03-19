class Solution
{
public:
    bool check(int *need, int *found)
    {
        int i;
        for (i = 0; i < 26; i++)
        {
            if (need[i] != found[i])
                return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2)
    {
        if (s1.size() > s2.size())
            return false;
        int need[26] = {0}, found[26] = {0};
        int i, n = s1.size();
        for (i = 0; i < n; i++)
        {
            need[s1[i] - 'a']++;
            found[s2[i] - 'a']++;
        }
        if (check(need, found))
            return true;
        for (i = n; i < s2.size(); i++)
        {
            found[s2[i - n] - 'a']--;
            found[s2[i] - 'a']++;
            if (check(need, found))
                return true;
        }
        return false;
    }
};