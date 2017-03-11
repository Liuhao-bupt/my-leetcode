class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() == 1 || s.empty())
            return s.size();
        //map<char,int> imp;
        int maxlen = 0;
        int i = 1;
        string cur = s.substr(0,1);
        for(int i = 1; i < s.size(); ++i){
            //if (imp[s[i]] != 0)
            if (find(cur.begin(), cur.end(), s[i]) == cur.end())
                cur += s[i];
            else{
                maxlen = (cur.size() > maxlen ? cur.size() : maxlen);
                int index = find(cur.begin(), cur.end(), s[i]) - cur.begin()+1;
                cur += s[i];
                cur = cur.substr(index,cur.size()-index);
            }
        }
        maxlen = (cur.size() > maxlen ? cur.size() : maxlen);
        return maxlen;
    }
};
