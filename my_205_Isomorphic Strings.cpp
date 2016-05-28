class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> vecs = my_tran(s);
        vector<int> vect = my_tran(t);
        return vecs == vect;
    }
    vector<int> my_tran(string str)
    {
        if (str.size() == 0)
            return{};
        int i = 0; 
        vector<int> res;
        map<char, int> mp;
        for (auto c : str)
        {
            if (mp.find(c) == mp.end()){
                mp[c] = i;
                res.push_back(i);
                ++i;}
            else{
                res.push_back(mp[c]);
                ++i;}
        }
        return res;
    }
};
