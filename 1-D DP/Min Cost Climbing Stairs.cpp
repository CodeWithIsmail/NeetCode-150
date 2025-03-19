class Solution
{
public:
    int minCostClimbingStairs(vector<int> &cost)
    {
        int n = cost.size(), i;
        int sumCost[n + 1];
        sumCost[0] = sumCost[1] = 0;
        for (i = 2; i <= n; i++)
            sumCost[i] =
                min(sumCost[i - 1] + cost[i - 1], sumCost[i - 2] + cost[i - 2]);

        return sumCost[n];
    }
};