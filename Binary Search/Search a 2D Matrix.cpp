class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int i;
        for (i = 0; i < matrix.size(); i++)
        {
            if (binary_search(matrix[i].begin(), matrix[i].end(), target))
            {
                return true;
            }
        }
        return false;
    }
};