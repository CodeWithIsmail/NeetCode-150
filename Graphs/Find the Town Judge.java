class Solution {
    public int findJudge(int n, int[][] trust) {
        int[] indegree = new int[n + 1];
        int[] outdegree = new int[n + 1];
        int ans = -1, i;
        for (int[] rel : trust) {
            indegree[rel[1]]++;
            outdegree[rel[0]]++;
        }
        for (i = 1; i <= n; i++) {
            if (indegree[i] == n - 1 && outdegree[i] == 0) {
                ans = i;
                break;
            }
        }
        return ans;
    }
}