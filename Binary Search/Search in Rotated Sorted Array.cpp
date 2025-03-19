class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int low = 0, up = nums.size() - 1, mn = 100000, index = -1;
        while (low <= up)
        {
            int mid = (low + up) / 2;
            if (nums[mid] < mn)
            {
                mn = nums[mid];
                index = mid;
            }
            if (nums[mid] > nums[up])
                low = mid + 1;
            else
                up = mid - 1;
        }
        int ind1 = lower_bound(nums.begin(), nums.begin() + index, target) -
                   nums.begin();
        if (nums[ind1] == target)
            return ind1;
        else
        {
            int ind2 = lower_bound(nums.begin() + index, nums.end(), target) -
                       nums.begin();
            if (ind2 == nums.size())
                return -1;
            if (nums[ind2] == target)
                return ind2;
            else
                return -1;
        }
    }
};