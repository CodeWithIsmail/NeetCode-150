class Solution
{
public:
    bool lemonadeChange(vector<int> &bills)
    {
        map<int, int> count;
        for (auto x : bills)
        {
            if (x == 10)
            {
                if (count[5] > 0)
                    count[5]--;
                else
                    return false;
            }
            else if (x == 20)
            {
                if (count[10] > 0 && count[5] > 0)
                {
                    count[10]--;
                    count[5]--;
                }
                else if (count[5] >= 3)
                {
                    count[5] -= 3;
                }
                else
                    return false;
            }
            count[x]++;
        }
        return true;
    }
};