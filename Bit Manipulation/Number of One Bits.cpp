class Solution
{
public:
    int hammingWeight(int n)
    {
        string bin = bitset<32>(n).to_string();
        int count = 0;
        for (auto x : bin)
        {
            if (x == '1')
                count++;
        }
        return count;
    }
};