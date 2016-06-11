class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
       map<int, int> mycount;
       vector<int> res;
       for (auto c : nums)
            ++mycount[c];
       for (auto it : mycount) {
           if (it.second == 1)
                res.push_back(it.first);
       }
       return res;
    }
};
