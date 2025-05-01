class Solution
{
public:
    map<int, vector<int>> ad;
    map<int, bool> vis;
    void dfs(int cur)
    {
        vis[cur] = true;
        for (auto x : ad[cur])
        {
            if (!vis[x])
                dfs(x);
        }
    }
    int countComponents(int n, vector<vector<int>> &edges)
    {

        for (auto x : edges)
        {
            ad[x[0]].push_back(x[1]);
            ad[x[1]].push_back(x[0]);
        }

        int ans = 0, i;
        for (i = 0; i < n; i++)
        {
            if (!vis[i])
            {
                ans++;
                dfs(i);
            }
        }
        return ans;
    }
};
