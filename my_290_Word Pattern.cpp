class Solution {
public:
    bool wordPattern(string pattern, string str) {
        vector<int> pat = map_pat(pattern);
        vector<int> str1 = map_str(str);
        return pat == str1;
    }
    vector<int> map_pat(string str)
    {
        if (str.size() == 0)
            return {};
        map<char,int> mp;
        vector<int> res;
        int i = 0;
        for (auto c : str)
        {
            if(mp.find(c) == mp.end()){
                mp[c] = i;
                res.push_back(i);
                ++i;}
            else
                res.push_back(mp[c]);
        }
        return res;
    }
    
    vector<int> map_str(string str)
    {
        if (str.size() == 0)
            return {};
        vector<string> vstr;
        vector<int> res;
        map<string, int> mpt;
        string cur = "";
        int i = 0;
        for(auto c : str)
        {
            if (c != ' ')
                cur += c;
            else{
                vstr.push_back(cur);
                cur = "";}
        }
        vstr.push_back(cur);
        for(auto it : vstr)
        {
            if (mpt.find(it) == mpt.end()){
                mpt[it] = i;
                res.push_back(i);
                ++i;}
            else
                res.push_back(mpt[it]);
        }
        return res;
    }
};
