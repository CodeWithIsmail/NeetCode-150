class Solution
{
public:
    bool isPalindrome(string s)
    {
        s.erase(remove_if(s.begin(), s.end(), [](char c)
                          { return !isalnum(c); }),
                s.end());
        cout << s << "\n";
        string t = s;
        reverse(t.begin(), t.end());
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        transform(t.begin(), t.end(), t.begin(), ::tolower);
        return s == t;
    }
};
