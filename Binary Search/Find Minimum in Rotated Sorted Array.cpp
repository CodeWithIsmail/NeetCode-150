class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int low = 0, up = nums.size() - 1, mn = 10000;
        while (low <= up)
        {
            int mid = (low + up) / 2;
            mn = min(nums[mid], mn);
            if (nums[mid] > nums[up])
                low = mid + 1;
            else
                up = mid - 1;
        }
        return mn;
    }
};