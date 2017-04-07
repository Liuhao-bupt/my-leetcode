class Solution {
public:
    string findLongestWord(string s, vector<string>& d) {
        sort(d.begin(),d.end(),mycompare);
        int l = d.size();
        for(int it = l-1; it >= 0; it--)
            if(TcontainS(s, d[it]))
                return d[it];
        return "";
    }
    static bool mycompare(string a, string b) {
	    return(a.size() == b.size() ? a > b : a.size() < b.size());
    }
    bool TcontainS(string t, string s){
        auto tb = t.begin();
        auto te = t.end();
        auto sb = s.begin();
        auto se = s.end();
        while(tb != te && sb != se){
            if(*tb == *sb)
                sb++;
            tb++;
        }
        if(sb == se)
            return true;
        return false;
    }
};
