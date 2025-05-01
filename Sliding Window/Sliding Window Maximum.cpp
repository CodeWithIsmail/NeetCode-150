class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        multiset<int, greater<int>> mt;
        int i, n = nums.size();
        vector<int> ans;
        for (i = 0; i < k; i++)
        {
            mt.insert(nums[i]);
        }
        ans.push_back(*mt.begin());
        for (i = 1; i <= n - k; i++)
        {
            auto it = mt.find(nums[i - 1]);
            mt.erase(it);
            mt.insert(nums[i + k - 1]);
            ans.push_back(*mt.begin());
        }
        return ans;
    }
};