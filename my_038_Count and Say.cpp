class Solution {
public:
    string countAndSay(int n) {
        if (n == 0)
            return "";
        string result = "1";
        string cur;
        for(int i = 1; i < n; ++i)
        {
            cur = my_convert(result);
            result = cur;
        }
        return result;
    }
    string my_convert(string str)
    {
        string res = "";
        int n = 1;
        for(auto i = 0; i < str.size() - 1; ++i)
        {
            if (str[i] == str[i+1])
                ++n;
            else
                res = res + to_string(n) + str[i], n = 1;
        }
        res = res + to_string(n) + str[str.size() - 1];
        return res;
    }
};
