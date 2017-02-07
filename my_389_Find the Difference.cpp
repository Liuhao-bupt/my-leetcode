class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char, int> s1;
        map<char, int> t1;
        for(char i: s)
            s1[i] += 1;
        for(char i: t)
            t1[i] += 1;
        for (auto it : t)
            if (s1[it] != t1[it])
                return it;
    }
};
