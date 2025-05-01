class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        unordered_map<int, int> ind;
        vector<int> ans;
        int i, j, n = temperatures.size();

        for (i = n - 1; i >= 0; i--)
        {
            int st = temperatures[i], mn = 1e9;
            for (j = st + 1; j <= 100; j++)
            {
                if (ind[j] != 0)
                    mn = min(mn, ind[j]);
            }
            if (mn == 1e9)
                ans.push_back(0);
            else
                ans.push_back(mn - i - 1);

            ind[st] = i + 1;
        };
        reverse(ans.begin(), ans.end());
        return ans;
    }
};