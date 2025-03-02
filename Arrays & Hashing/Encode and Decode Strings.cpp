class Solution
{
public:
    string encode(vector<string> &strs)
    {
        string en = "";
        for (auto x : strs)
        {
            string len = to_string(x.size());
            en += len + "!" + x;
        }
        cout << en << "\n";
        return en;
    }

    vector<string> decode(string s)
    {
        int i;
        vector<string> de;
        for (i = 0; i < s.size(); i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
            {
                string temp = "";
                while (s[i] != '!' && i < s.size())
                {
                    temp += s[i];
                    i++;
                }

                int len = stoi(temp);
                cout << len << "\n";
                i++;

                string cur = s.substr(i, len);
                de.push_back(cur);
                i += len - 1;
            }
        }
        for (auto x : de)
            cout << x << "\n";
        return de;
    }
};
