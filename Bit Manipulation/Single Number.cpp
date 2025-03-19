class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int x_or = 0;
        for (auto x : nums)
            x_or ^= x;
        return x_or;
    }
};