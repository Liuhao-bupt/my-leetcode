class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.empty())
            return 0;
        if(full_empty(s))
            return 0;
        string last = "";
        string cur = ""; 
        for(auto c : s)
        {
            if(c != ' ')
                cur += c;
            else
                last = (cur.empty() ? last : cur), cur = "";
        }
        last = (cur.empty() ? last : cur);
        return last.size();
    }
    bool full_empty(string s)
    {
        for(auto c : s)
        {
            if(c != ' ')
                return false;
        }
        return true;
    }
};
