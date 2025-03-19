class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        bool check = true;
        int i, j;
        for (i = 0; i < board.size(); i++)
        {
            int count = 0;
            unordered_set<char> temp;
            for (auto x : board[i])
            {
                if (x != '.')
                {
                    count++;
                    temp.insert(x);
                }
            }
            if (count != temp.size())
            {
                return false;
            }
        }

        for (i = 0; i < board.size(); i++)
        {
            int count = 0;
            unordered_set<char> temp;
            for (j = 0; j < board.size(); j++)
            {
                char x = board[j][i];
                if (x != '.')
                {
                    count++;
                    temp.insert(x);
                }
            }
            if (count != temp.size())
            {
                return false;
            }
        }

        map<pair<int, int>, vector<char>> mp;
        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 9; j++)
            {
                int row = i / 3;
                int col = j / 3;
                mp[{row, col}].push_back(board[i][j]);
            }
        }
        for (auto y : mp)
        {
            int count = 0;
            unordered_set<char> temp;
            for (auto x : y.second)
            {
                if (x != '.')
                {
                    count++;
                    temp.insert(x);
                }
            }
            if (count != temp.size())
            {
                return false;
            }
        }
        return true;
    }
};