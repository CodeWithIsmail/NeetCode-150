class Solution
{
public:
    int calc(int a, int b, string x)
    {
        if (x == "+")
            return a + b;
        if (x == "-")
            return b - a;
        if (x == "*")
            return a * b;
        return b / a;
    }
    int evalRPN(vector<string> &tokens)
    {
        stack<int> st;
        for (auto x : tokens)
        {
            if (x == "+" || x == "-" || x == "*" || x == "/")
            {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(calc(a, b, x));
            }
            else
                st.push(stoi(x));
        }
        return st.top();
    }
};