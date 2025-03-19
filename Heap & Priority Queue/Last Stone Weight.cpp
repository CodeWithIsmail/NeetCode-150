class Solution
{
public:
    int lastStoneWeight(vector<int> &stones)
    {
        priority_queue<int> p(stones.begin(), stones.end());
        int ans = 0;
        while (p.size())
        {
            int f = p.top();
            p.pop();
            if (p.empty())
                ans = f;
            else
            {
                int s = p.top();
                p.pop();
                f -= s;
                p.push(f);
            }
        }
        return ans;
    }
};