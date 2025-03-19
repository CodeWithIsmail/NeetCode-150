class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> index;
        int i;
        for (i = 1; i <= nums.size(); i++)
        {
            int need = target - nums[i - 1];
            if (index[need])
            {
                return {min(i, index[need]) - 1, max(i, index[need]) - 1};
            }
            index[nums[i - 1]] = i;
        }
        return {};
    }
};
