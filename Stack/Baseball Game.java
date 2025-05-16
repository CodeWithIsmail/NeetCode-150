class Solution {
    public int calPoints(String[] operations) {
        Stack<Integer> st = new Stack<>();
        for (String s : operations) {
            if (s.equals("+")) {
                int top1 = st.pop();
                int top2 = st.pop();
                int top = top1 + top2;
                st.push(top2);
                st.push(top1);
                st.push(top);
            } else if (s.equals("D"))
                st.push(st.peek() * 2);
            else if (s.equals("C"))
                st.pop();
            else
                st.push(Integer.parseInt(s));
        }
        int ans = 0;
        for (Integer s : st)
            ans += s;
        return ans;
    }
}