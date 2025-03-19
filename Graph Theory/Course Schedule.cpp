class Solution
{
public:
    bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
    {

        int indegree[numCourses];
        int i;
        for (i = 0; i < numCourses; i++)
            indegree[i] = 0;
        unordered_map<int, vector<int>> adj;
        for (auto x : prerequisites)
        {
            indegree[x[0]]++;
            adj[x[1]].push_back(x[0]);
        }
        queue<int> q;
        for (i = 0; i < numCourses; i++)
        {
            if (indegree[i] == 0)
            {
                q.push(i);
            }
        }
        vector<int> seq;
        while (q.size())
        {
            int t = q.front();
            q.pop();
            seq.push_back(t);
            for (auto x : adj[t])
            {
                indegree[x]--;
                if (indegree[x] == 0)
                {
                    q.push(x);
                }
            }
        }
        return seq.size() == numCourses;
    }
};