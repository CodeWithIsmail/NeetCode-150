class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        for (auto x : nums)
        {
            x = abs(x);
            if (nums[x - 1] > 0)
                nums[x - 1] *= -1;
            else
                return x;
        }
        return 0;
    }
};