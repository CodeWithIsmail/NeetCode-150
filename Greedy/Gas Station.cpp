class Solution
{
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
    {
        int i, n = gas.size(), profit = 0, ind = 0;
        if (accumulate(gas.begin(), gas.end(), 0) <
            accumulate(cost.begin(), cost.end(), 0))
            return -1;
        for (i = 0; i < n; i++)
        {
            profit += gas[i] - cost[i];
            if (profit < 0)
            {
                profit = 0;
                ind = i + 1;
            }
        }

        return ind;
    }
};