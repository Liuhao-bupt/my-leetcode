class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> my_map;
        int i = 0;
        for(auto c : nums)
        {
            if (my_map.find(c) != my_map.end() && i-my_map[c] <= k)
                return true;
            else
                my_map[c] = i++;
        }
        return false;
    }
};
