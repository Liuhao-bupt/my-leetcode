class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1)
            return s;
        vector<string> result{numRows};
        int i, j;
        i = j = 0;
        while (i < s.size()) {
            while (i < s.size() && j < numRows-1) {
                result[j++] += s[i++];
            }
            while (i < s.size() && j > 0) {
                result[j--] += s[i++];
            }
        }
        string res = "";
        for(auto c : result)
            res += c;
        return res;
    }
};
