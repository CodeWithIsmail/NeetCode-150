class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int i, n = nums.size(), need = 0;
        bool trap = false;

        for (i = n - 2; i >= 0; i--)
        {
            if (trap)
                need++;
            if (!nums[i] && !trap)
            {
                trap = true;
                need = 1;
            }
            else
            {
                if (nums[i] >= need)
                {
                    trap = false;
                    need = 0;
                }
            }
        }
        return !trap;
    }
};
