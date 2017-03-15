class Solution {
    //created by lh on 2017/3/15
    //complexity Time O(nlogn + mlogn); Space:O(1)
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(heaters.begin(), heaters.end());
        int Radius = INT_MIN;
        for (int house : houses) {
            auto big = lower_bound(heaters.begin(), heaters.end(), house);
            int cur = INT_MAX;
            if (big != heaters.end())
                cur = *big-house;
            if (big != heaters.begin()){
                auto small = big-1;
                cur = min(house-*small, cur);
            }
            Radius = max(Radius, cur);
        }
        return Radius;
    }
};
