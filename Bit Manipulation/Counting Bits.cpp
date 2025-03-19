class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> v;
        int i;
        for (i = 0; i <= n; i++)
        {
            string bin = bitset<17>(i).to_string();
            int count = 0;
            for (auto x : bin)
            {
                if (x == '1')
                    count++;
            }
            v.push_back(count);
            // v.push_back(__builtin_popcount(i));
        }
        return v;
    }
};