class Solution {
public:
    vector<pair<int, int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int len1 = nums1.size();
        int len2 = nums2.size();
        if (len1 == 0 || len2 == 0 || k == 0)
            return {};
        auto comp = [&nums1, &nums2](pair<int,int> a, pair<int,int> b){
            return nums1[a.first] + nums2[a.second] > nums1[b.first] + nums2[b.second];
        };
        priority_queue<pair<int,int>, vector<pair<int,int>>, decltype(comp)> imp(comp);
        vector<pair<int,int>> ans;
        for (int i = 0; i < len1; ++i)
            imp.push(make_pair(i, 0));
        for (int i = 0; i < k && !imp.empty(); ++i) {
            pair<int,int> temp = imp.top();
            ans.push_back(make_pair(nums1[temp.first], nums2[temp.second]));
            imp.pop();
            if (temp.second+1 < len2)
                imp.push(make_pair(temp.first, temp.second+1));
        }
        return ans;
    }
};
