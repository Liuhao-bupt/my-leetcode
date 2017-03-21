class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> out;
        Sol(0, s, res, out);
        return res;
    }
    void Sol(int k, string s, vector<vector<string>>& res, vector<string>& out) {
        if (s.size() == k){
            res.push_back(out);
            return;
        }
        for(int i = k; i < s.size(); ++i){
            if(ispalindrome(s,k,i)){
                out.push_back(s.substr(k,i-k+1));
                Sol(i+1, s, res, out);
                out.pop_back();
            }
        }
    }
    bool ispalindrome(string s, int left, int right){
        while (left <= right) {
            if (s[left++] != s[right--])
                return false;
        }
        return true;
    }
};
