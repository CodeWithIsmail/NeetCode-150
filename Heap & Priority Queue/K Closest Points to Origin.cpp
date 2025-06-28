class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, vector<int>>> pt;
        vector<vector<int>> ans;

        for (auto x : points) {
            int dis = x[0] * x[0] + x[1] * x[1];
            pt.push({dis, x});
            if (pt.size() > k)
                pt.pop();
        }
        while (pt.size()) {
            ans.push_back(pt.top().second);
            pt.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};