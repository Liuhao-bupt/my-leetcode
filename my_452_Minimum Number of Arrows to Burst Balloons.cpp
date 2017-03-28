class Solution {
public:
    int findMinArrowShots(vector<pair<int, int>>& points) {
        sort(points.begin(),points.end(),mycompare);
        if (points.size() == 0)
            return 0;
        int minCount = 1;
        int arrow = points[0].second;
        for (auto it : points){
            if (arrow < it.first){
                arrow = it.second;
                minCount++;
            }
        }
        return minCount;
    }
    static bool mycompare(pair<int,int> a, pair<int,int> b) {
        return (a.second == b.second ? a.first < b.first : a.second < b.second);
    }
};
