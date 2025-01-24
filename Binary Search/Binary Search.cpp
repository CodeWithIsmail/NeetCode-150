class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int ind = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        if (nums[ind] != target)
            ind = -1;
        return ind;
    }
};

