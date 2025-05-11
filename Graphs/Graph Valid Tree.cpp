class Solution
{
public:
    map<int, vector<int>> adList;
    map<int, int> parent;
    bool vis[105];
    bool ans = true;

    void dfs(int current)
    {
        vis[current] = true;
        for (auto child : adList[current])
        {
            if (vis[child])
            {
                if (parent[current] != child)
                    ans = false;
            }
            else
            {
                parent[child] = current;
                dfs(child);
            }
        }
    }
    bool validTree(int n, vector<vector<int>> &edges)
    {
        int i;
        parent[0] = -1;
        bool check = true;
        memset(vis, false, sizeof(vis));

        for (auto x : edges)
        {
            adList[x[0]].push_back(x[1]);
            adList[x[1]].push_back(x[0]);
        }
        dfs(0);
        for (i = 0; i < n; i++)
        {
            if (!vis[i])
            {
                check = false;
                cout << i << " ";
            }
        }

        return (check && ans);
    }
};
