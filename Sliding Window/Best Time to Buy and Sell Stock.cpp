class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int buy = prices[0], i, ans = INT_MIN;
        for (i = 1; i < prices.size(); i++)
        {
            int profit = prices[i] - buy;
            ans = max(ans, profit);
            buy = min(buy, prices[i]);
        }
        return max(0, ans);
    }
};