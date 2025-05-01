class Solution
{
public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> v;
        int n = nums.size(), i, j, total = 1 << n;
        for (i = 0; i < total; i++)
        {
            string bin = bitset<10>(i).to_string();
            vector<int> temp;
            for (j = 0; j < n; j++)
            {
                if (bin[9 - j] == '1')
                    temp.push_back(nums[j]);
            }
            v.push_back(temp);
        }

        return v;
    }
};