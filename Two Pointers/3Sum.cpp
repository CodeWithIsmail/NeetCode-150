class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int i;
        vector<vector<int>> ans;
        for (i = 0; i < nums.size(); i++)
        {
            if (i > 0)
            {
                if (nums[i] == nums[i - 1])
                    continue;
            }
            int left = i + 1, right = nums.size() - 1, target = -nums[i],
                last = -1e6;
            while (left < right)
            {
                if (nums[left] == last)
                {
                    left++;
                    continue;
                }
                int sum = nums[left] + nums[right];
                if (sum < target)
                    left++;
                else if (sum > target)
                    right--;
                else
                {
                    ans.push_back({nums[i], nums[left], nums[right]});
                    last = nums[left];
                    left++;
                    right--;
                }
            }
        }

        return ans;
    }
};