class Solution
{
public:
    bool visited[301][301];
    void dfs(int i, int j, int m, int n, vector<vector<char>> &grid)
    {
        if (visited[i][j])
            return;
        visited[i][j] = true;
        if (i - 1 >= 0)
        {
            if (grid[i - 1][j] == '1')
                dfs(i - 1, j, m, n, grid);
        }
        if (i + 1 < m)
        {
            if (grid[i + 1][j] == '1')
                dfs(i + 1, j, m, n, grid);
        }
        if (j - 1 >= 0)
        {
            if (grid[i][j - 1] == '1')
                dfs(i, j - 1, m, n, grid);
        }
        if (j + 1 < n)
        {
            if (grid[i][j + 1] == '1')
                dfs(i, j + 1, m, n, grid);
        }
    }
    int numIslands(vector<vector<char>> &grid)
    {
        int i, j, ans = 0, m = grid.size(), n = grid[0].size();
        memset(visited, 0, sizeof(visited));
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (grid[i][j] == '1' && !visited[i][j])
                {
                    ans++;
                    dfs(i, j, m, n, grid);
                }
            }
        }
        return ans;
    }
};