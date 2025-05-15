class Solution {
    public String longestCommonPrefix(String[] strs) {
        int i, cur = 0;
        StringBuilder ans = new StringBuilder();
        boolean done = false;

        while (!done) {
            char temp = '0';
            for (String x : strs) {
                if (cur == x.length()) {
                    done = true;
                    break;
                }
                if (x.charAt(cur) != temp) {
                    if (temp == '0')
                        temp = x.charAt(cur);
                    else {
                        done = true;
                        break;
                    }
                }
            }
            if (!done) {
                ans.append(temp);
                cur++;
            }
        }
        return ans.toString();
    }
}