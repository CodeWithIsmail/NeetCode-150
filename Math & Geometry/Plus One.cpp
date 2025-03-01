class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int i;
        bool done = false;
        vector<int> ans;
        for (i = digits.size() - 1; i >= 0; i--)
        {
            if (digits[i] == 9)
            {
                digits[i] = 0;
            }
            else
            {
                digits[i]++;
                done = true;
                break;
            }
        }
        if (!done)
        {
            ans.push_back(1);
            for (auto x : digits)
                ans.push_back(x);
            return ans;
        }

        return digits;
    }
};
