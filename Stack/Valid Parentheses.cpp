class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        bool ans = true;
        for (auto x : s)
        {
            if (x == '(' || x == '{' || x == '[')
                st.push(x);
            else
            {
                if (st.empty())
                {
                    ans = false;
                    break;
                }
                else if (x == ')')
                {
                    if (st.top() == '(')
                        st.pop();
                    else
                    {
                        ans = false;
                        break;
                    }
                }

                else if (x == '}')
                {
                    if (st.top() == '{')
                        st.pop();
                    else
                    {
                        ans = false;
                        break;
                    }
                }
                else if (x == ']')
                {
                    if (st.top() == '[')
                        st.pop();
                    else
                    {
                        ans = false;
                        break;
                    }
                }
            }
        }
        if (!st.empty())
            ans = false;
        return ans;
    }
};
