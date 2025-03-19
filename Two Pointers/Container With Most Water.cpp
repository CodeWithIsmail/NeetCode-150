class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int left = 0, right = height.size() - 1, mx = -1;
        while (left < right)
        {
            int area = (right - left) * min(height[left], height[right]);
            mx = max(mx, area);
            if (height[left] <= height[right])
                left++;
            else
                right--;
        }
        return mx;
    }
};