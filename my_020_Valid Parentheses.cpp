class Solution {
public:
    bool isValid(string s) {
        if (s.size() == 0)
            return true;
        stack<char> sta;
        if (s[0] == ')' || s[0] == ']' || s[0] == '}')
            return false;
        sta.push(s[0]);
        string::size_type c = 1;
        for(; c < s.size(); ++c)
        {
            switch(s[c])
            {
                case ']':
                if (!sta.empty() && sta.top() == '[')
                    sta.pop();
                else
                    return false;
                break;
                
                case ')':
                if (!sta.empty() && sta.top() == '(')
                    sta.pop();
                else
                    return false;
                break;
                
                case '}':
                if (!sta.empty() && sta.top() == '{')
                    sta.pop();
                else
                    return false;
                break;
                
                default:
                sta.push(s[c]);
                break;
            }
        }
        return sta.empty();
    }
};
