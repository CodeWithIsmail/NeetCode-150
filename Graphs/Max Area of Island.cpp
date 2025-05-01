class Solution
{
public:
    bool visited[51][51];
    int count = 0;
    void dfs(int i, int j, int m, int n, vector<vector<int>> &grid)
    {
        if (visited[i][j])
            return;
        visited[i][j] = true;
        count++;
        if (i - 1 >= 0)
        {
            if (grid[i - 1][j])
                dfs(i - 1, j, m, n, grid);
        }
        if (i + 1 < m)
        {
            if (grid[i + 1][j])
                dfs(i + 1, j, m, n, grid);
        }
        if (j - 1 >= 0)
        {
            if (grid[i][j - 1])
                dfs(i, j - 1, m, n, grid);
        }
        if (j + 1 < n)
        {
            if (grid[i][j + 1])
                dfs(i, j + 1, m, n, grid);
        }
    }
    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        int i, j, ans = 0, m = grid.size(), n = grid[0].size();
        memset(visited, 0, sizeof(visited));
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (grid[i][j] == 1 && !visited[i][j])
                {
                    dfs(i, j, m, n, grid);
                    ans = max(ans, count);
                    count = 0;
                }
            }
        }
        return ans;
    }
};