class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result;
        if(strs.empty())
            return result;
        result = strs[0];
        vector<string>::size_type ind;
        for(ind = 1; ind < strs.size(); ++ind){
            result = longComPreFix(strs[ind], result);}
        return result;
    }
    string longComPreFix(string str1, string str2)
    {
        string res;
        if(str1.empty() || str2.empty())
            return res;
        string::size_type index;
        for(index = 0; index < str1.size() && index < str2.size(); ++index)
        {
            if(str1[index] == str2[index])
                res += str1[index];
            else
                return res;
        }
        return res;
    }
};
