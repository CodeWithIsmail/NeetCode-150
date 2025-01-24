```
class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        map<string, vector<string>> mp;
        for (auto x : strs)
        {
            string temp = x;
            sort(x.begin(), x.end());
            mp[x].push_back(temp);
        }
        vector<vector<string>> vp;
        for (auto x : mp)
        {
            vp.push_back(x.second);
        }
        return vp;
    }
};

```