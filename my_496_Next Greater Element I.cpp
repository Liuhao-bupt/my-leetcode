class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        stack<int> s;
        int n = nums.size();
        map<int, int> temp;
        for (int num : nums) {
            while (!s.empty() && num > s.top()) {
                temp[s.top()] = num;
                s.pop();
            }
            s.push(num);
        }
        int l = findNums.size();
        vector<int> res(l,-1);
        for (int i = 0; i < l; ++i)
            res[i] = temp[findNums[i]] != 0? temp[findNums[i]] : -1;
        return res;
    }
};
