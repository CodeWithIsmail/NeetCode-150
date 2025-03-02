class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> mp;
        vector<vector<int>> v(nums.size());
        vector<int> ans;
        int i;

        for (auto x : nums)
        {
            mp[x]++;
        }
        for (auto x : mp)
        {
            v[x.second - 1].push_back(x.first);
        }
        for (i = nums.size() - 1; i >= 0; i--)
        {
            if (v[i].size() > 0)
            {
                for (auto x : v[i])
                {
                    ans.push_back(x);
                    k--;
                    if (k == 0)
                        break;
                }
            }
            if (k == 0)
                break;
        }
        return ans;
    }
};
