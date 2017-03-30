class Solution {
//created by lh on 2017/3/30
//Complexity:Time O(n);Space O(n);
public:
    vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {
        sort(people.begin(),people.end(),mycompare);
        vector<pair<int,int>>res;
        for(auto it : people)
            res.insert(res.begin()+it.second,it);
        return res;
    }
    static bool mycompare(pair<int,int> a, pair<int,int> b){
        return(a.first == b.first? a.second < b.second : a.first > b.first);
    }
};
