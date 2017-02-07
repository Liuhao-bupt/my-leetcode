class Solution {
public:
    vector<int> constructRectangle(int area) {
        int s = sqrt(area);
        vector<int> res;
        int w, l;
        int max = area;
        for (int i = 1; i <= s; ++i)
            if (area % i == 0){
                int j = area/i;
                if (j - i < max){
                    max = j - i;
                    w = i;
                    l = j;}
            }
        res.push_back(l);
        res.push_back(w);
        return res;
    }
};
