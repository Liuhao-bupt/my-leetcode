class Solution {
public:
    vector<string> readBinaryWatch(int num) {
        vector<string> res;
        for (int i = 0; i <= min(num,4); ++i){
            vector<vector<int>> top = combine(4, i);
            vector<vector<int>> bottom = combine(6,num-i);
            cout << top.size() << "-----" << bottom.size() << endl;
            for (auto ittop : top)
                for (auto itbot : bottom){
                    string ans = "";
                    int hour = 0;
                    int minute = 0;
                    for (int num : ittop)
                        hour += pow(2,num);
                    for (int num : itbot)
                        minute += pow(2,num);
                    if(minute < 10 && hour < 12){
                        ans = to_string(hour) + ":" + "0" + to_string(minute);
                        res.push_back(ans);}
                    else if (hour < 12 && minute <= 59){
                        ans = to_string(hour) + ":" + to_string(minute);
                        res.push_back(ans);}
                }
        }
        return res;
    }
    string calculate(vector<int> a, vector<int> b) {
        string ans = "";
        int hour = 0;
        int minute = 0;
        for (int num : a)
            hour += pow(2,num);
        for (int num : b)
            minute += pow(2,num);
        if(minute < 10 && hour < 12)
            ans = to_string(hour) + ":" + "0" + to_string(minute);
        else if (hour < 12 && minute <= 59)
            ans = to_string(hour) + ":" + to_string(minute);
        return ans;
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> out;
        Sol(res,out,0,k,n);
        return res;
    }
    void Sol(vector<vector<int>>& res, vector<int>& out, int level, int k, int n){
        if (out.size() == k){
            res.push_back(out);
            return;
        }
        for (int i = level; i < n; ++i) {
            out.push_back(i);
            Sol(res,out,i+1,k,n);
            out.pop_back();
        }
    }
    
};
