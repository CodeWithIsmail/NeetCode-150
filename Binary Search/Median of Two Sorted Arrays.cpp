class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        for (auto x : nums2)
        {
            nums1.push_back(x);
        }
        sort(nums1.begin(), nums1.end());
        double mid;
        if (nums1.size() % 2)

            mid = nums1[nums1.size() / 2];

        else
            mid = (double)(nums1[nums1.size() / 2] + nums1[nums1.size() / 2 - 1]) / 2;

        return mid;
    }
};
